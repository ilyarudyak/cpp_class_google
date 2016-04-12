#include <iostream>
#include <cmath>

using namespace std;

// exercise 1
void triangular(int limit) {
    for (long x = 0; x < limit; ++x) {
        for (long y = 0; y < limit; ++y) {
            if (pow(x, 2) - 2 * pow(y, 2) == 1) {
//                cout << "(" << x << ", " << y << ") ";
//                cout << "(" << (x - 1) / 2 << ", " << y / 2 << ") ";
                cout << pow(y / 2, 2) << " ";
            }
        }
    }
    cout << endl;
}

int main() {

//    triangular(10000);
    return 0;
}