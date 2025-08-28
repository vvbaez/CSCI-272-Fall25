
#include <iostream>
using namespace std;
int main() {
    float principal; //creating variables
    float rate;
    float time;
    float interest;
    float years;
    float amount;
    cout<<"\nEnter the principal amount ";
    cin>> principal;
    cout<<"\nEnter the interest rate ";
    cin>> rate;
    cout<<"\nEnter the number of months amount ";
    cin>> time;
    years = time / 12;
    interest = (principal * rate * years) / 100 ; //formula for interest
    cout<<"\nThe total interest is "<<interest;
    amount = principal + interest;
    cout<<"\nThe total amount is "<<amount;
    
    return 0;
}