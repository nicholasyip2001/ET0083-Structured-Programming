#include <iostream>
using namespace std;

void entry(double values[]);
//Additional function prototype when needed
void display (double values[]);
double find_min (double values[]);

int main()
{
    double values[6];
    double minimum;
    cout << "Data Analysis" << endl;
    cout << "=============" << endl<<endl;
    entry(values);	// Call function to allow user to enter the readings
    // Additional function calls when needed
    display(values);
    minimum = find_min (values);

    cout<< "\n\nSmallest value = " << minimum;
    return 0;
}
// Your functions here
void entry(double values[])
{
    for (int i=0; i<6; i++)
    {
        cout<< "Enter Reading: ";
        cin>> values[i];
    }
    return;
}

void display (double values[])
{
    int i=0;
    cout << "\nYou have entered the following readings: " << values[i];
    for (i=1;i<6;i++)
        cout << ", " << values[i];
    return;
}

double find_min (double values[])
{
    int i=0;
    double minimum=0;
    minimum = values[i];
    for (i=1;i<6;i++)
    {
        if (values[i] < minimum)
            minimum=values[i];
    }
    return (minimum);
}
