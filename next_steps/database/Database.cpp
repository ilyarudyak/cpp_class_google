#include "Database.h"

Composer &Database::addComposer(string in_first_name, string in_last_name,
                                string in_genre, int in_yob, string in_fact) {
    Composer composer;
    composer.set_first_name(in_first_name);
    composer.set_last_name(in_last_name);
    composer.set_composer_genre(in_genre);
    composer.set_composer_yob(in_yob);
    composer.set_fact(in_fact);

    composers_.push_back(composer);
    return composers_[composers_.size() - 1];
}

Composer &Database::getComposer(string in_last_name) {
    for (auto it = composers_.begin(); it != composers_.end(); ++it) {
        if (it->last_name() == in_last_name) {
            return *it;
        }
    }
}

void Database::displayAll() {
    for (Composer composer : composers_) {
        composer.Display();
    }
}

void Database::displayByRank() {
    for (Composer composer : composers_) {
        composer.Display();
    }
}







