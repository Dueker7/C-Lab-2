#include <iostream>
#include <string>
using namespace std;

//checkers function
void checkers(char awnser, string lineOne, string lineTwo) {
    //if user wants checkers, then give it to them. If not................................................. sad
    if (awnser == 'Y' || awnser == 'y') {
        //prints the cheackers :)
        for (int i = 0; i != 4; i++) {
            cout << lineOne << "\n";
            cout << lineTwo << "\n";
        }
        cout << "\nC H E A C K E R";
    }
    else if (awnser == 'N' || awnser == 'n') {
        //no checkers, no welcome
        cout << "Well wtf dude. Fine then, leave!";
    }
    else {
        //the result of putting anything but Y, y, N, or n into the command line
        cout << "That makes no sense, dum dum.";
    };
}

int main()
{
    //declaring the variables
    char awnser;
    string lineOne = "* * * * * * *";
    string lineTwo = " * * * * * * *";

    //this is my hard-coded schedule becuse im too lazy to make a whole scheduling system like i first intended (it was hard)
    cout << "My weekly schedule for college is\n";
    cout << "Monday: C++ class from 10:00 - 11:00\n";
    cout << "Tuesday: Python class from 8:30 - 9:45, C++ class from 10:00 - 11:00\n";
    cout << "Wensday: C++ class from 10:00 - 11:00\n";
    cout << "Thursday: Tuesday: Python class from 8:30 - 9:45, C++ class from 10:00 - 11:00\n";
    cout << "Friday: C++ class from 10:00 - 11:00\n";

    //you better say yes
    cout << "DO YOU WANT TO CHECKERS???\nY/N\n";
    cin >> awnser;

    //calls the checkers function
    checkers(awnser, lineOne, lineTwo);
}
