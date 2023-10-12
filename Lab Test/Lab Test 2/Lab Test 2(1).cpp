// Savings for the month                                        //Line 1
#include <iostream>                                             //Line 2
#include <iomanip>                                              //Line 3
using namespace std;                                            //Line 4
                                                                //Line 5
int main()                                                      //Line 6
{                                                               //Line 7
    double salary, expenses, savings;                           //Line 8
    double percent;                                             //Line 9
                                                                //Line 10
    cout << "Enter salary: ";                                   //Line 11
    cin >> salary;                                              //Line 12*
    cout << "Enter expenses: ";                                 //Line 13
    cin >> expenses;                                            //Line 14*
                                                                //Line 15
    if(salary > expenses)                                       //Line 16*
    {                                                           //Line 17
        savings = salary - expenses;                            //Line 18
        percent = savings / salary * 100;                       //Line 19*
        cout << "\nSavings for this month is: $" << fixed       //Line 20
             << setprecision(2) << savings << endl;             //Line 21
        cout << "This amount is " << fixed << setprecision(2)   //Line 22
             << percent << "% of your salary." << endl;         //Line 23
    }                                                           //Line 24
    else                                                        //Line 25
        cout << "\nNo savings for this month." << endl;         //Line 26*
    return 0;                                                   //Line 27
}                                                               //Line 28
