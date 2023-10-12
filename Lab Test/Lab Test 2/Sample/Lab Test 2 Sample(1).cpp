#include <iostream>                                         // Line 1
#include <iomanip>                                         // Line 2
#include <cmath>                                            // Line 3
using namespace std;                                        // Line 4
                                                            // Line 5
int main()                                                  // Line 6
{                                                           // Line 7
    double num1, num2, ans;                                 // Line 8*
    char op;                                                // Line 9
    cout << "Simple Calculator" << endl;                    // Line 10
    cout << "=================\n" << endl;                  // Line 11
    cout << "Enter the first number: ";                     // Line 12*
    cin >> num1;                                            // Line 13
    cout << "Enter the operation(+-*/^): ";                 // Line 14
    cin >> op;                                              // Line 15
    cout << "Enter the second number: ";                    // Line 16
    cin >> num2;                                            // Line 17*
    cout << fixed << setprecision(3);                       // Line 18*
    switch(op)                                              // Line 19
    {                                                       // Line 20
        case '+':   ans = num1 + num2;                      // Line 21
                    cout << "Answer = " << ans << endl;     // Line 22
                    break;                                  // Line 23
        case '-':   ans = num1 - num2;                      // Line 24
                    cout << "Answer = " << ans << endl;     // Line 25
                    break;                                  // Line 26
        case '*':   ans = num1 * num2;                      // Line 27
                    cout << "Answer = " << ans << endl;     // Line 28
                    break;                                  // Line 29
        case '/':   ans = num1 / num2;                      // Line 30
                    cout << "Answer = " << ans << endl;     // Line 31
                    break;                                  // Line 32
        case '^':   ans = pow(num1,num2);                   // Line 33*
                    cout << "Answer = " << ans << endl;     // Line 34
                    break;                                  // Line 35
        default:    cout << "Invalid operation." << endl;   // Line 36
                    break;                                  // Line 37
    }                                                       // Line 38
    return 0;                                               // Line 39
}                                                           // Line 40
