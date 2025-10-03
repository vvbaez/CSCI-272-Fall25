#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name{"John Doe"};
    int age {30};
    char gender {'F'};
    
    public:
    void introduce (){
        cout<< "I'm " << name << ". Age: " <<age;
        
        if (gender== 'M'){
            cout<< " \nI identify as a male" << endl;
        } else if( gender == 'F'){
            cout<< "\nI identify as a female" << endl;
        }else{
            cout<< "\nGender not specified" <<endl;
        }
      };
};

    int main (){
        Person person1;
        
        person1.introduce();
        
        return 0;
        
    }
