#include <iostream>

using namespace std;

int getInput() {

    cout << "please enter an int: " << endl;
    int weeklySales = 0;
    while (!(cin >> weeklySales)) {
        cout << "please enter an int" << endl;
        cin.clear();
        cin.ignore(100, '\n');
    }
    return weeklySales;
}
double calcMethod1(int weeklySales) {
    return 600;

}
double calcMethod2(int weeklySales) {
    return 7 * 40 + .1 * weeklySales;

}
double calcMethod3(int weeklySales) {
    return .2 * weeklySales + 20 * weeklySales / 225;
}

int main() {

    int weeklySales = getInput();
    cout << "method1=" << calcMethod1(weeklySales) << endl;
    cout << "method2=" << calcMethod2(weeklySales) << endl;
    cout << "method3=" << calcMethod3(weeklySales) << endl;
    return 0;
}













