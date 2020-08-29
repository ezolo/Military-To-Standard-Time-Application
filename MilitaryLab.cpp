
#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
void convert(int&, int&, int&, string&);
void output(int&, int&, string&);

int main()
{

    int hours, minutes, delay;
    string ampm;

    cout << "Enter hours(0-24): ";
    cin >> hours;

    do {
        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter delay(in minutes): ";
        cin >> delay;

        convert(hours, minutes, delay, ampm);
        output(hours, minutes, ampm);

        cout << endl << "Enter the value for Hours (999 to quit):  ";
        cin >> hours;
    } while (hours != 999);

    return 0;
}


void convert(int& hours, int& minutes, int& delay, string& ampm)
{
    int temp = 0;

    minutes += delay;
    if (minutes > 60) {
        temp = minutes / 60;
        hours += temp;
        minutes = minutes - temp * 60;
    }

    if (hours > 12) {
        hours -= 12;
        ampm = "PM";
    }
    else {
        ampm = "AM";
    }
}


void output(int& hours, int& minutes, string& ampm)
{
    if (minutes > 0 && minutes < 10) {
        cout << hours << ":0" << minutes << " " << ampm << endl;;
    }
    else if (minutes == 0) {
        cout << hours << ":0" << minutes << " " << ampm << endl;;
    }
    else {
        cout << hours << ":" << minutes << " " << ampm << endl;
    }
}
