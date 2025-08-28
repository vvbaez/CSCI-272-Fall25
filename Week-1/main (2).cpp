/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main () {
    int first; //creates a varible 
    int second;
    int third;
    int sum;
    int average;
    int product;
    cout<<"Enter the first number: \n"; //output for users to see
    cin>>first; //what they input 
    cout<<"Enter the second number: \n";
    cin>>second;
    cout<<"Enter the third number: \n";
    cin>>third;
    sum = first + second + third; //equation for sum 
    cout<<"The sum of the first number is "<<sum;
    average = first + second + third / 3.0; //equation for average 
    cout<<"\nThe average of the first number is "<<average;
    product = first * second * third; //equation for product
    cout<<"\nThe product of the first number is "<<product;
    cout<<"\nThank You";
    return 0;
}