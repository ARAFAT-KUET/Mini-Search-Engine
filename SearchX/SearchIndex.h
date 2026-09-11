
#ifndef SEARCHINDEX_H
#define SEARCHINDEX_H

#include <string>

#include "HashTable.h"
#include "TextProcessor.h"

using namespace std;


// =========================================================
// SEARCH INDEX
// =========================================================

class SearchIndex
{
private:

    HashTable index;

    TextProcessor processor;


public:

    SearchIndex();


    void addDocument(
        string fileName);


    void buildIndex(
        string fileNames[],
        int documentCount);


    void searchWord(
        string word);


    bool contains(
        string word);


    int getFrequency(
        string word,
        string fileName);
};

#endif
