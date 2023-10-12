#include <iostream>

using namespace std;

int main()
{
        char list[10]="ldddjs?kd";
        int i,loc=10;

        for (i=0;i<10;i++)
            if (list[i]=='?')loc=i;
        cout<< "The last '?' in the array can be found in subscript ="<< loc;
        return 0;
}
