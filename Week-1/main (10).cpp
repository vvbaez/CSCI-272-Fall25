#include <iostream>
using namespace std;

void Square(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int side;
    cout << "Enter the length of the square: ";
    cin >> side;
    Square(side);

    return 0;
}