#include <iostream>
#include <iomanip>

using namespace std;

void cricket() {

    double numberOfChirps = 0;
    cout << "Number of chirps: ";
    cin >> numberOfChirps;
    cout << "The temperature is: " << setprecision(1) << fixed
         << (numberOfChirps + 40) / 4 << " degrees" << endl;

}
void exam() {

    double assignment1, assignment2, assignment3, assignment4;
    double midterm, final, participation;

    cout << "Enter the score for the first assignment: ";
    cin >> assignment1;
    cout << "Enter the score for the second assignment: ";
    cin >> assignment2;
    cout << "Enter the score for the third assignment: ";
    cin >> assignment3;
    cout << "Enter the score for the forth assignment: ";
    cin >> assignment4;
    cout << "Enter the score for the midterm: ";
    cin >> midterm;
    cout << "Enter the score for the final: ";
    cin >> final;
    cout << "Enter the score for the section grade: ";
    cin >> participation;

    double finalGrade = (assignment1 + assignment2 + assignment3 + assignment4) * .1 +
                        midterm * .15 + final * .35 + participation * .1;
    cout << "The final grade is: " << setprecision(1) << fixed << finalGrade << endl;
}
void time() {
    int numberOfSeconds;
    cout << "Number of seconds: ";
    cin >> numberOfSeconds;

    int hours = numberOfSeconds / 3600;
    cout << "Hours: " << hours << endl;

    numberOfSeconds -= 3600 * hours;
    int minutes = numberOfSeconds / 60;
    cout << "Minuts: " << minutes << endl;

    numberOfSeconds -= 60 * minutes;
    cout << "Seconds: " << numberOfSeconds << endl;
}
void printLetters(int numberOfLetters, string letter) {
    for (int i = 0; i < numberOfLetters; ++i) {
        cout << letter;
    }
    cout << endl;
}
void printLetters(int firstLetterPosition,
                  int secondLetterPosition, string letter) {
    for (int i = 0; i < firstLetterPosition; ++i) {
        cout << " ";
    }
    cout << letter;
    for (int j = firstLetterPosition + 1; j < secondLetterPosition; ++j) {
        cout << " ";
    }

    // account for a case when only one letter is printed: Z, Y etc.
    if (firstLetterPosition < secondLetterPosition) {
        cout << letter;
    }

    for (int k = secondLetterPosition + 1; k < 5; ++k) {
        cout << " ";
    }
    cout << endl;
}

// exercise 4
void printF() {
    string letter = "F";
    printLetters(5, letter);
    printLetters(1, letter);
    printLetters(3, letter);
    printLetters(1, letter);
    printLetters(1, letter);
}
void printE() {
    string letter = "F";
    printLetters(5, letter);
    printLetters(1, letter);
    printLetters(3, letter);
    printLetters(1, letter);
    printLetters(5, letter);
}
void printR() {
    string letter = "R";
    printLetters(4, letter);
    printLetters(0, 4, letter);
    printLetters(4, letter);
    printLetters(0, 3, letter);
    printLetters(0, 4, letter);
}
void printB() {
    string letter = "B";
    printLetters(4, letter);
    printLetters(0, 4, letter);
    printLetters(4, letter);
    printLetters(0, 4, letter);
    printLetters(4, letter);
}
void printZ() {
    string letter = "Z";
    printLetters(5, letter);
    printLetters(3, 3, letter);
    printLetters(2, 2, letter);
    printLetters(1, 1, letter);
    printLetters(5, letter);
}
void printY() {
    string letter = "Y";
    printLetters(0, 4, letter);
    printLetters(1, 3, letter);
    printLetters(2, 2, letter);
    printLetters(2, 2, letter);
    printLetters(2, 2, letter);
}
void printLetter(char letter) {
    switch (letter) {
        case 'F' :
            printF();
            break;
        case 'E' :
            printE();
            break;
        case 'R' :
            printR();
            break;
        case 'B' :
            printB();
            break;
        case 'Z' :
            printZ();
            break;
        case 'Y' :
            printY();
            break;
        default:
            cout << endl;
    }
}

int main() {

    string banner = "FREEZY BREEZE";
    for (int i = 0; i < banner.size(); ++i) {
        printLetter(banner[i]);
        cout << endl;
    }

//    time();
//    exam();
//    cricket();
    return 0;
}










