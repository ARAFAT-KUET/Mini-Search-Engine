#include <iostream>
#include <string>

#include "SearchEngine.h"

using namespace std;


// =========================================================
// MAIN
// =========================================================

int main()
{
    cout << "========================================" << endl;
    cout << "              SEARCHX" << endl;
    cout << "       MINI SEARCH ENGINE" << endl;
    cout << "========================================" << endl;


    // =====================================================
    // CREATE SEARCH ENGINE
    // =====================================================

    SearchEngine searchEngine;


    cout << endl;
    cout << "Building search index..." << endl;


    searchEngine.buildIndex();


    cout << "Index built successfully!" << endl;


    // =====================================================
    // SEARCH LOOP
    // =====================================================

    string query;


    while (true)
    {
        cout << endl;

        cout << "Enter search query"
             << " (type exit to quit): ";


        cin >> query;


        // -------------------------------------------------
        // EXIT
        // -------------------------------------------------

        if (query == "exit")
        {
            break;
        }


        // -------------------------------------------------
        // SEARCH
        // -------------------------------------------------

        searchEngine.search(query);
    }


    cout << endl;

    cout << "Thank you for using SearchX!" << endl;


    return 0;
}
