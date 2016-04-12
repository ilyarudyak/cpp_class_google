#include <iostream>
#include <iomanip>
#include <cmath>

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

// exercise 4
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

// exercise 5
int reverseInt(int acc, int exp, int n) {

//    cout << acc << " " << exp << " " << n << endl;

    if (n == 0) {
        return acc;
    } else {
        return reverseInt(acc + (int)((n % 10) * pow(10, exp)),
                   exp - 1, (n - (n % 10)) / 10);
    }
}
int reverseInt(int n) {
    return reverseInt(0, (int)to_string(n).size() - 1, n);
}
void magicNumber() {
    int number = 0;
    cout << "enter magic number: ";
    cin >> number;

    int reverseNumber = reverseInt(number);
    cout << "reverse=" << reverseNumber << endl;

    int subtract = number - reverseNumber;
    cout << "subtract=" << subtract << endl;

    int reverseSubtract = reverseInt(subtract);
    cout << "reverse=" << reverseSubtract << endl;

    int add = subtract + reverseSubtract;
    cout << add << endl;
}

// exercise 6
int decodeMonth(char month) {
    return month - 'A' +1;
}
int decodeDate(string date) {
    return (date[0] - 'Q' + 1) * 10 + (date[1] - 'Q' + 1);
}
int decodeYear(char year) {
    return 1995 + (year - 'A' + 1);
}
void decode(string code) {
    cout << decodeMonth(code[0]) << "-";
    cout << decodeDate(code.substr(1, 2)) << "-";
    cout << decodeYear(code[3]) << endl;
}

// exercise 7
int finalTransform(int n) {
    if (n == 9) {
        return n;
    } else if (n % 2 != 0) {
        return (n + 11 < 20) ? (n + 11) / 2 : (n - 11) / 2;
    } else {
        return n / 2;
    }
}
void cardTrick() {

    int number = 0;
    cout << "enter number: ";
    cin >> number;

    string abc = to_string(number);
    cout << abc << endl;

    int x = stoi(abc) % 11;
    int y = stoi(abc.substr(1) + abc[0]) % 11;
    int z = stoi(abc[2] + abc.substr(0, 2)) % 11;
    cout << x << " " << y << " " << z << endl;

    int xy = x + y;
    int yz = y + z;
    int xz = x + z;
    cout << xy << " " << yz << " " << xz << endl;

    int theSameNumber = finalTransform(xy) * 100 +
                        finalTransform(yz) * 10 +
                        finalTransform(xz);

    cout << theSameNumber << endl;


}

int main() {

    cardTrick();

//    decode("ARZM");
//    cout << decodeMonth('L') << endl;

//    cout << reverseInt(901) << endl;
//    magicNumber();

//    string banner = "FREEZY BREEZE";
//    for (int i = 0; i < banner.size(); ++i) {
//        printLetter(banner[i]);
//        cout << endl;
//    }
//    time();
//    exam();
//    cricket();
    return 0;
}
































