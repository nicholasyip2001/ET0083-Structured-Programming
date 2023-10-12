#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x%3==0)
    {
        cout << "The number is divisible by 3."<<endl;
        cin >> x;
    }
    return 0;
}
