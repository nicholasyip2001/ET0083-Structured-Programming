#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char char1,char2;
    double Height,Length,A,B,C,D,E;

    cout << "Enter 'P' to calculate\nOther characters to quit :";
    cin >> char1;

    if (char1!='P')
    {
        cout << "\nEnd";
    }
    else
    {
        cout << "\nEnter Value for A :";
        cin >> A;
        cout << "\nEnter Value for B :";
        cin >> B;
        cout << "\nEnter Value for C :";
        cin >> C;
        cout << "\nEnter Value for D :";
        cin >> D;
        cout << "\nEnter Value for E :";
        cin >> E;

        cout << "\nEnter 'L' to calculate Length\nOther characters to calculate Height:";
        cin >> char2;

        if (char2=='L')
        {
            Length = ((5*C)*pow(D+A,2))/(2*pow(B*E,0.5));
            cout << "\nLength = "<<Length;

        }
        else
        {
            Height = (3*A*C*pow(B+D,0.5))/(pow(E-A,2)-(8.1*B));
            cout << "\nHeight ="<< Height;
        }
    }
    return 0;
}
