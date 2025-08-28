#include <iostream>
using namespace std;
void payroll(float &totalpayroll, int &overtime);
        
int main() {
    float totalpayroll = 0;
    int overtime = 0;

    payroll(totalpayroll, overtime);
    cout << totalpayroll << endl;
    cout << overtime << endl;

    return 0;
}

void payroll(float &totalpayroll, int &overtime) {
    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        float hours;
        float rate;
        cout << "Enter hours worked: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;

        totalpayroll += hours * rate;

        if (hours > 40) {
            overtime++;
        }
    }
}
     
