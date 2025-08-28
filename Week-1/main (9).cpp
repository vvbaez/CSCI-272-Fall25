
#include <iostream>
using namespace std;
int main()
{
    int base; //making variables
    int exponent;
    int total = 1;
    
    cout<<"Enter the base "; //to get results of any number 
    cin>>base;
    cout<<"Enter the exponent ";
    cin>>exponent;
    
    if (exponent == 0){ //makes sure that it outputs the right answer
        total = 1;
    }
    else {
        for (int i = 0; i < exponent; i++) 
        total *= base;
    }
    cout<<base<<" raised to the "<<exponent<<" power is "<<total;

    return 0;
}