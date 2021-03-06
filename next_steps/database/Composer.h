#ifndef DATABASE_COMPOSER_H
#define DATABASE_COMPOSER_H

#include <string>
using namespace std;



// composer.h, Maggie Johnson
// Description: The class for a Composer record.
// The default ranking is 10 which is the lowest possible.
// Notice we use const in C++ instead of #define.
const int kDefaultRanking = 10;

class Composer {
public:
    // constructor
    Composer() = default;

    // accessors and mutators
    void set_first_name(string in_first_name);
    string first_name();
    void set_last_name(string in_last_name);
    string last_name();
    void set_composer_yob(int in_composer_yob);
    int composer_yob();
    void set_composer_genre(string in_composer_genre);
    string composer_genre();
    void set_ranking(int in_ranking);
    int ranking();
    void set_fact(string in_fact);
    string fact();

    // methods
    // this method increases a composer's rank by increment.
    void Promote(int increment);
    // this method decreases a composer's rank by decrement.
    void Demote(int decrement);
    // this method displays all the attributes of a composer.
    void Display();
    // overloaded < operator
//    bool operator <(const Composer& other) {
//        return ranking_ < other.ranking_;
//    }

private:
    string first_name_;
    string last_name_;
    int composer_yob_; // year of birth
    string composer_genre_; // baroque, classical, romantic, etc.
    string fact_;
    int ranking_ = 0;
};


#endif //DATABASE_COMPOSER_H
