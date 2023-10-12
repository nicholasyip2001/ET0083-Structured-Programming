#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double ans1,ans2,x,y,z;
    int num1,num2;

    cout<< "Choose: 1 to calculate, Other Number to quit: ";
    cin>> num1;
    switch (num1)
    {
        case 1 :
        cout << "\nChoose: 10 for Equation A, Other values for Equation B: ";
        cin>> num2;
        cout<< "\nEnter Values for x,y,z Respectively: ";
        cin >>x;
        cin >>y;
        cin >> z;

    switch (num2)
    {
        case 10: ans1= (pow(x,2)/(3*y))+(sqrt(2+(4*z)));
        cout << "\nAns =" << ans1;
        break;

        default: ans2= ((4*pow(x,2))/(3*z))-(sqrt((2*x)+y));
        cout << "\nAns ="<< ans2;
        break;
    }
            break;
    default : cout<<"\nEnd";
            break;
    }
    return 0;
}
