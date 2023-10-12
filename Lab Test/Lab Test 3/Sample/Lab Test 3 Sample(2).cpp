#include <iostream>

using namespace std;

int main()
{
    int number,sum=0;
    do
    {
        cout << "\nEnter a number, enter -1 to terminate : ";
        cin >> number;
        if(number!=-1)
        {
            sum=sum+number;
        }
        else
        {
            cout << "\nSum of all number = " << sum;
        }
    } while (number!=-1);
    return 0;
}
