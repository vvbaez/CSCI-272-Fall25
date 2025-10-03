#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    string brand{"Honda"};
    string model = "Civic";
    int year {2025};
    
    public :
    Car(){ //default constructer 
        
    }
    
    Car(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }
    
    //copy contructer 
    Car(const Car& other){
        brand = other.brand;
        model = other.model;
        year = other.year;
    }
    
    public:
    void startEngine(){
        cout<< "Engine started for: " <<year <<" "<<brand<<" " <<model << endl;
    }
    
};
int main(){
   Car car1; //create an object //default constructor
   Car car2 ("Tesla", "Model X", 2025); //parameter contructer 
   Car car3(car2);
   
   Car* pCar1 = new Car;
   Car* pCar2 = new Car("Tesla", "Model Y", 2025);
   Car car[20];
   
   car1.startEngine();
   car2.startEngine();
   car3.startEngine();
   pCar1->startEngine();
   pCar2->startEngine();
   
   car[14].startEngine();
   
    return 0;
}