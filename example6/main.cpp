#include <iostream>

using namespace std;

int main() {
    string str1 = "To be or not to be, that is the question";
    string str2 = "only ";

    string str3 = str1.substr(6, 12); // or not to be
    cout << "str3=" << str3 << endl;
    cout << "-----------------" << endl;

    for (int j = 0; j < str1.size(); ++j) {
        cout << str1[j] << ":" << j << " ";
    }
    cout << endl;
    str1.insert(32, str2);
    cout << str1 << endl;
    cout << "-----------------" << endl;

    cout << str1.find("to be", 0) << endl;
    str1.replace(str1.find("to be", 0), 5, "to jump");
    cout << str1 << endl;
    cout << "-----------------" << endl;

    str1.erase(9, 4);
    cout << str1 << endl;

    for (int i = 0; i < str3.length(); i++) {
        cout << str3[i];
    }
    cout << endl;

    cout << "-----------------" << endl;
    string str5 = "hello my friend";
    str5.replace(6, 2, "our");
    cout << str5 << endl;

    return 0;
}