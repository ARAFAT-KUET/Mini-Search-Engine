
#include "SearchEngine.h"

#include <iostream>

using namespace std;


// =========================================================
// CONSTRUCTOR
// =========================================================

SearchEngine::SearchEngine()
{
    fileNames[0] = "dsa.txt";
    fileNames[1] = "cpp.txt";
    fileNames[2] = "algorithms.txt";
    fileNames[3] = "database.txt";

    documentCount = 4;
}


// =========================================================
// BUILD INDEX
// =========================================================

void SearchEngine::buildIndex()
{
    searchIndex.buildIndex(
        fileNames,
        documentCount);
}


// =========================================================
// SEARCH
// =========================================================

void SearchEngine::search(string query)
{
    cout << endl;

    cout << "========================================" << endl;
    cout << "             SEARCH RESULTS" << endl;
    cout << "========================================" << endl;


    // -----------------------------------------------------
    // Check whether word exists
    // -----------------------------------------------------

    if (!searchIndex.contains(query))
    {
        cout << endl;
        cout << "No documents found for: "
             << query
             << endl;

        cout << "========================================" << endl;

        return;
    }


    cout << endl;

    cout << "Results for: "
         << query
         << endl;

    cout << "----------------------------------------" << endl;


    int resultNumber = 1;


    // -----------------------------------------------------
    // Check every document
    // -----------------------------------------------------

    for (int i = 0; i < documentCount; i++)
    {
        int frequency =
            searchIndex.getFrequency(
                query,
                fileNames[i]);


        if (frequency > 0)
        {
            cout << endl;

            cout << resultNumber
                 << ". "
                 << fileNames[i]
                 << endl;

            cout << "   Frequency: "
                 << frequency
                 << endl;


            resultNumber++;
        }
    }


    cout << endl;
    cout << "========================================" << endl;
}
