// Write your admission number here
// Write your name here
// Write your class here

#include <iostream>
using namespace std;

void entry(double temp[]);
//Additional function prototype when needed
void display (double temp[]);
double avg_Temp (double temp[]);
void max_temp (double  temp[]);

int main()
{
    double temp[5];
    double avg;
    cout << "Room Temperature Analysis" << endl;
    cout << "=========================" << endl<<endl;
    entry(temp);	// Call function to allow user to enter the readings
    // Additional function calls when needed
    display (temp);
    avg = avg_Temp(temp);
    cout<< "\n\nAverage temperature is : "<< avg;
    max_temp(temp);

    return 0;
}

// Your functions here
void entry(double temp [])
{
    int i;
    for (i=0;i<5;i++)
    {
        cout<< "Enter temperature : " ;
        cin >> temp[i];
    }

    return;
}

void display (double temp[])
{
    int i=0;

    cout<< "\nYou have entered the following readings: " << temp[i];
    i++;

    while (i<5)
    {
        cout<< ", " << temp[i];
        i++;
    }
    return;
}

double avg_Temp (double temp[])
{
    double avg;
    int i=0;
    double total=0;
    while (i<5)
    {
        total+=temp[i];
        i++;
    }

    avg = total/i;

    return (avg);

}

void max_temp (double  temp[])
{
    int i=0;
    double max;
    max=temp[i];
    i=1;
    while (i<5)
    {
    if (temp [i]>max)
        max= temp[i];
        i++;
    }
    cout<< "\n\nHighest Temperature = " << max;
}
