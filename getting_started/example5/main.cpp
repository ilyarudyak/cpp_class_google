#include <iostream>

using namespace std;

void animals() {

    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j <= ((100 - 10*i) / 3); ++j) {
            for (int k = 0; k <= ((100 - 10*i - 3*j) / 0.5); ++k) {
                if ((10*i + 3*j + .5*k) == 100 && (i + j + k) == 100) {
                    cout << "i j k " << i << " " << j << " "<< k << endl;
                }
            }
        }
    }
}

int countdown = 1;

void permute(string books) {

    if (books.size() != 0) {
        countdown *= books.size();
        permute(books.substr(1));
    }
}

int main() {
//    animals();
    permute("123456");
    cout << countdown << endl;
    return 0;
}