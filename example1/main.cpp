#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout.width(17);
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << right << "Hello, World! ";
        }
        cout << endl;
    }
    return 0;
}