
#include <iostream>
using namespace std;


// function to calculate seconds
int secondstwelve(int hours, int minutes, int seconds) {
    if (hours == 12) hours = 0;  
    return (hours * 3600) + (minutes * 60) + seconds;
}

int main() {
    int hours, min1, sec1;
    cout << "Enter hours ";
    cin>>hour1;
    cout << "Enter minutes ";
    cin>>min1;
    cout << "Enter seconds ";
    cin >>sec1;

    int result = secondstwelve(hour1, min1, sec1);
    cout << "Seconds since 12 is " << result << endl;

    return 0;
}
