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

// exercise 2
struct Book {
    int code;
    double price;
    int inventory;
    bool required;
    bool newb;
};

Book book;
int enrollment = 0;
double totalCosts = 0;
double totalProfit = 0;
double kRequiredNew  = .90;
double kRequiredUsed = .65;
double kOptionalNew  = .40;
double kOptionalUsed = .20;
double kProfitMargin = .20;

void getBookInfo() {
    cout << "Please enter the book code: ";
    cin >> book.code;
    cout << " single copy price: ";
    cin >> book.price;
    cout << " number on hand: ";
    cin >> book.inventory;
    cout << " 1 for required, 0 for optional: ";
    cin >> book.required;
    cout << " 1 for new, 0 for used: ";
    cin >> book.newb;
    cout << " prospective enrollment: ";
    cin >> enrollment;
    cout << "***************************************************" << endl;
}

double getOrderQuantity() {
    if (book.required) {
        if (book.newb) {
            return kRequiredNew * enrollment;
        } else {
            return kRequiredUsed * enrollment;
        }
    } else {
        if (book.newb) {
            return kOptionalNew * enrollment;
        } else {
            return kOptionalUsed * enrollment;
        }
    }
}
void printBookInfo() {
    cout << "book: " << book.code << endl;
    cout << "price: $" << book.price << endl;
    cout << "inventory: " << book.inventory << endl;
    cout << "enrollment: " << enrollment << endl;
    cout << endl;
    cout << "this book is " << (book.required ? "required " : "optional ")
         << "and " << (book.newb ? "new" : "used") << endl;
    cout << "***************************************************" << endl;
    double order = (int)(getOrderQuantity() - book.inventory);
    cout << "need to order: " << order << endl;
    cout << "total cost: $" << order * book.price << endl;
    cout << "***************************************************" << endl;
    totalCosts += order * book.price;
    totalProfit += order * kProfitMargin * book.price;
}
void bookMain() {
    bool next = true;
    while (true) {

        getBookInfo();
        printBookInfo();

        cout << endl;
        cout << "enter 1 to do another book, 0 to stop: ";
        cin >> next;
        cout << "***************************************************" << endl;
        if (!next) {
            cout << "total costs for all orders: $" << totalCosts << endl;
            cout << "total profit: $" << totalProfit << endl;
            cout << "***************************************************" << endl;
            break;
        }
    }
}

int main() {

    bookMain();
//    triangular(10000);
    return 0;
}















