#include <iostream>

using namespace std;

void DoIt(int &a, int b) {
    a = b + 3;
    b = a + 4;
    a = b + 3;
    b = a;
}

int main() {
    int *foo, *goo;
    foo = new int;
    *foo = 1;
    goo = new int;
    *goo = 3;
    cout << "*foo=" << *foo << " *goo=" << *goo << endl;

    *foo = *goo + 3;
    cout << "*foo=" << *foo << " *goo=" << *goo << endl;

    foo = goo;
    cout << "*foo=" << *foo << " *goo=" << *goo << endl;

    *goo = 5;
    cout << "*foo=" << *foo << " *goo=" << *goo << endl;

    *foo = *goo + *foo;
    cout << "*foo=" << *foo << " *goo=" << *goo << endl;

    DoIt(*foo, *goo);
    cout << "*foo=" << *foo << " *goo=" << *goo << endl;

    return 0;
}