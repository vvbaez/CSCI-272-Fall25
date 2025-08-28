#include <iostream>
using namespace std;

int main() {
    int num;
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 1) {
        factorial *= num; 
        num--;          
    }
 
    cout << "The factorial is: " << factorial << endl;

    return 0;
}