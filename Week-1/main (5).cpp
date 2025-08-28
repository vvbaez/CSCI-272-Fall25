#include <iostream> 
using namespace std;
int main (){
    float num1;
    float num2;
    char choice;
  //  float a;
   // float s;
   // float m;
   // float d;
   float result;
    
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter another number: ";
    cin>>num2;
    cout<<"Choose one of the following options:" ;
    cout<<"\n a for addition ";
    cout<<"\n s for subtraction" ;
    cout<<"\n m for multiplication";
    cout<<"\n d for division" ;
    cout<<"\nEnter a choice: " ;
    cin>>choice;
    
    if (choice == 'a'){
        result = num1 + num2 ; 
        cout<<"The sum of your numbers is "<<result ;
    }
    else if (choice == 's'){
        result = num1 - num2 ;
         cout<<"The difference of your numbers is "<<result ;
    }
    else if (choice == 'm'){
        result = num1 * num2 ; 
         cout<<"The product of your numbers is "<<result ;
    }
      else {
        result = num1 / num2 ;
         cout<<"The quotient of your numbers is "<<result ;
    }
    
    return 0;
}