#include <iostream>
#include <cmath>

/* Write a program to calculate F using the formula and given A,B,C */

using namespace std;

int main()
{
    int A,B,C;
    double F;

    cout << "Enter A : " ;
    cin >> A;

    cout << "\nEnter B : " ;
    cin >> B;

    cout << "\nEnter C : " ;
    cin >> C;

    F = (sqrt(2*A*(pow(B,2) + pow(C,3))))/(3*B)-((1/7)*(pow(B,2)));

    cout << "\nThe computed F = " << F << endl;

    return 0;
}
