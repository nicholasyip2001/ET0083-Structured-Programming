/*This program allows user to guess a hidden code*/         //Line 1
#include <iostream>                                         //Line 2
using namespace std;                                        //Line 3
#define code 123                                            //Line 4*
int main()                                                  //Line 5*
{                                                           //Line 6
    int num, tries=0;                                       //Line 7
    while(1)                                                //Line 8*
    {                                                       //Line 9
        cout << "Enter code: ";                             //Line 10
        cin >> num;                                         //Line 11
        tries++;                                            //Line 12
        if (num == code)                                    //Line 13*
            break;                                          //Line 14
        if (num > code)                                     //Line 15
            cout << "Too high!" << endl;                    //Line 16
        else                                                //Line 17
            cout << "Too low!" << endl;                     //Line 18
    }                                                       //Line 19
    if (tries <= 3)                                         //Line 20*
        cout << "You are good at guessing code!" << endl;   //Line 21
    else                                                    //Line 22
        cout << "You take more than 3 guesses." << endl;    //Line 23
    return 0;                                               //Line 24
}                                                           //Line 25
