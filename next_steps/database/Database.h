//
// Created by Ilya Rudyak on 4/13/16.
//

#ifndef DATABASE_DATABASE_H
#define DATABASE_DATABASE_H


// database.h, Maggie Johnson
// Description: Class for a database of Composer records.
#include  <iostream>
#include <vector>
#include <set>
#include "Composer.h"

// Our database holds 100 composers, and no more.
const int kMaxComposers = 100;

class Database {
public:
    Database() = default;

    // Add a new composer using operations in the Composer class.
    // For convenience, we return a reference (pointer) to the new record.
    Composer& addComposer(string in_first_name, string in_last_name,
                          string in_genre, int in_yob, string in_fact);
    // Search for a composer based on last name. Return a reference to the
    // found record.
    Composer& getComposer(string in_last_name);
    // Display all composers in the database.
    void displayAll();
    // Sort database records by rank and then display all.
    void displayByRank();


private:
    vector<Composer> composers_;
};


#endif //DATABASE_DATABASE_H
