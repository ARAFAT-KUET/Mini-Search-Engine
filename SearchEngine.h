
#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include <string>

#include "SearchIndex.h"

using namespace std;


// =========================================================
// SEARCH RESULT
// =========================================================

struct SearchResult
{
    string fileName;
    int frequency;
};


// =========================================================
// SEARCH ENGINE
// =========================================================

class SearchEngine
{
private:

    SearchIndex searchIndex;

    string fileNames[4];

    int documentCount;


public:

    SearchEngine();

    void buildIndex();

    void search(string query);
};

#endif
