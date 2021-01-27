#include <iostream>
using namespace std;
int main() {
    cout << "Enter Year: "; // print out instruction for user
    int year; // initialize int data type called year
    cin >> year; //user's input year
    bool leap = false; //initialize boolean 
    if(year % 4 == 0) { // intializes the 1st condition
        if(year % 100 == 0) { // initialize 2nd condition after 1st is met
            if(year % 400 == 0) { // initialize 3rd condition after 2nd and 1st is met
                leap = true; //all conditions met, exit year is leap
            }else
             leap = false; //year divisble by 4 and 100 
        }else
        leap = true; // year divisible by 4, not 100
    }else
        leap = false; // year not divisible by 4
    if(leap == true) { // if year met all leap condtions
        cout << year << " is Leap Year." << endl; // the following if/else statement lets user know if the year they chose is leap or not
    }else
        cout << year << " is NOT Leap Year." << endl;
}