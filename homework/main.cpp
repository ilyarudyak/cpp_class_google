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

int main() {

    time();
//    exam();
//    cricket();
    return 0;
}