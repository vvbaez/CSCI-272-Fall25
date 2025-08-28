
#include <iostream>
using namespace std;
int main() {
    double salary, tax; 
    cout << "\n***Welcome to Mario's Federal Tax Calculator***";
    cout << "\nEnter your pay salary in a year: ";
    cin >> salary;
    
    if (salary <= 11000) {
        tax = salary * 0.10;
    }
    else if (salary <= 44725) {
        tax = 1100 + 0.12 * (salary - 11000);
    } 
    else if (salary <= 95375) {
        tax = 5147 + 0.22 * (salary - 44725);
    }
    else if (salary <= 182100) {
        tax = 16290 + 0.24 * (salary - 95375);
    } 
    else if (salary <= 231250) {
        tax = 37104 + 0.32 * (salary - 182100);
    }
    else {
        cout << "\n Salary exceeds the given tax brackets." ;
    }
    
    cout << "\nTax amount you owe to IRS is " << tax;
    cout << "\nThanks for using the calculator, have a great year ahead!" ;
    
    return 0;
}