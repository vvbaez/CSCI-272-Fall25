
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int NUM_ROUNDS = 3;
 int EMOJI_COUNT = 6;
 int MAX_SPIN = 3;
 int POWERUPS
//array of emojis count
string emojis {EMOJI_COUNT}] = { "\U0001F34E", "\U0001F352", "\U0001F347", "\U0001F514", "\U0001F514",  "\U0001F340"};

//array of powerups 
string POWERUPS [6] = { "\U0001F501", "\U0001F522", "\u26D4",  "\U0001F340", "\u267B\ufe0f",  "\U0001F6E1"};

//function for random number
int randomnum (int max) {
    return rand()% max; 
    
//function for introduction

void instructions(){
    cout<<"Welcome to the Emoji Slot Machine Game"<<endl;
    cout<<"This game is a fun time for you and your friends!"<<endl;
    cout<<"Match the emojis (3 of the same emoji) to earn points and combine powerups to help you win"<<endl;
    cout << "3 emojis match = 50 points"<<endl;
    cout << "2 emojis match = 20 points"<<endl;
    cout << "No match = 0 points" <<endl;
}
    

}
int main()
{
    srand(time(0));
   instructions();

    return 0;
}