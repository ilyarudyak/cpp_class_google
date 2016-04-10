#include <iostream>

using namespace std;

void playGame(int secretNumber) {
    int input_var = 0;
    do {
        cout << "Enter a number (-1 = quit): ";
        if (!(cin >> input_var)) {
            cout << "Please enter numbers only." << endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }
        if (input_var != -1) {
            if (input_var < secretNumber) {
                cout << "too low" << endl;
            } else if (input_var > secretNumber) {
                cout << "too high" << endl;
            } else {
                cout << "correct!" << endl;
            }

        }
    }
    while (input_var != -1);
    cout << "All done." << endl;
}

void gcd(int a, int b) {

    int tmp = 0;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    cout << "gcd=" + to_string(a) << endl;
}

int main() {

//    srand ((unsigned int) time(nullptr));
//    int secretNumber = rand() % 100 + 1;
//    cout << "secretNumber=" + to_string(secretNumber) << endl;
//
//    playGame(secretNumber);

    int x, y;
    while (true) {
        cout << "enter two integers: " << endl;
        if (!(cin >> x >> y)) {
            cout << "please enter only integers" << endl;
            cin.clear();
            cin.ignore(100, '\n');
        } else {
            gcd(x, y);
            break;
        }
    }


    return 0;
}














