#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "  \t1\t2\t3\t4\t5\t6\t7\t8\t9" << endl <<
            "  \t-\t-\t-\t-\t-\t-\t-\t-\t-" << endl;
    for (int c = 1; c < 10; c++) {
        cout << c << "|\t";
        for (int i = 1; i < 10; i++) {
            cout << i * c << '\t';
        }
        cout << endl;
    }
    return 0;
}