#include <iostream>

using namespace std;

int main()
{
    int number,count;

    cout <<"Loop to use : For\n";
    cout <<"Terminating number : -888\n";
    cout <<"Target : From 200 to 300 divisible by 6\n";
    cout <<"=======================================\n\n";

    count =0;
    number = 0;
    for (;number!=-888;)
    {
        cout<<"Enter a number : ";
        cin>>number;

        if (number>=200 && number <=300 && number%6==0)
            count++;

    }

    cout <<"\nThere is/are " <<count<< " number(s) entered.";


    return 0;
}
