
#include "SearchIndex.h"

#include <iostream>
#include <vector>

using namespace std;


// =========================================================
// CONSTRUCTOR
// =========================================================

SearchIndex::SearchIndex()
{
}


// =========================================================
// ADD ONE DOCUMENT
// =========================================================

void SearchIndex::addDocument(string fileName)
{
    string path = "documents/" + fileName;


    vector<string> words =
        processor.processDocument(path);


    for (int i = 0; i < words.size(); i++)
    {
        index.insert(
            words[i],
            fileName);
    }
}


// =========================================================
// BUILD COMPLETE INDEX
// =========================================================

void SearchIndex::buildIndex(
    string fileNames[],
    int documentCount)
{
    for (int i = 0; i < documentCount; i++)
    {
        addDocument(fileNames[i]);
    }
}


// =========================================================
// SEARCH WORD
// =========================================================

void SearchIndex::searchWord(string word)
{
    index.displayWord(word);
}


// =========================================================
// CHECK WORD
// =========================================================

bool SearchIndex::contains(string word)
{
    return index.search(word);
}


// =========================================================
// GET FREQUENCY
// =========================================================

int SearchIndex::getFrequency(
    string word,
    string fileName)
{
    return index.getFrequency(
        word,
        fileName);
}
