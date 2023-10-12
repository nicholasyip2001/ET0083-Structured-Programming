#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i;
 double results[5]={2.5, 0.4, 1.7, 5.5, 6.4}, y=8.5;
 for (i=2;i<5;i++)
 if(y < results[i]) y=results[i];
 cout<< y;
    return 0;
}
