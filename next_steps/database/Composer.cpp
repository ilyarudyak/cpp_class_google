//
// Created by Ilya Rudyak on 4/13/16.
//

#include <iostream>
#include "Composer.h"

void Composer::set_first_name(string in_first_name) {
    first_name_ = in_first_name;
}
string Composer::first_name() {
    return first_name_;
}

void Composer::set_last_name(string in_last_name) {
    last_name_ = in_last_name;
}
string Composer::last_name() {
    return last_name_;
}

void Composer::set_composer_yob(int in_composer_yob) {
    composer_yob_ = in_composer_yob;
}
int Composer::composer_yob() {
    return composer_yob_;
}

void Composer::set_composer_genre(string in_composer_genre) {
    composer_genre_ = in_composer_genre;
}
string Composer::composer_genre() {
    return composer_genre_;
}

void Composer::set_ranking(int in_ranking) {
    ranking_ = in_ranking;
}
int Composer::ranking() {
    return ranking_;
}

void Composer::set_fact(string in_fact) {
    fact_ = in_fact;
}
string Composer::fact() {
    return fact_;
}

void Composer::Promote(int increment) {
    ranking_ += increment;
}
void Composer::Demote(int decrement) {
    ranking_ -= decrement;
}
void Composer::Display() {
    cout << first_name_ << " " << last_name_ << ", "
         << composer_yob_ << ", " << composer_genre_ << ", "
         << ranking_ << endl;
    cout << fact_ << endl;

}





























