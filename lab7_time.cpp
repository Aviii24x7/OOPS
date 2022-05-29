/*create a class Time to store time in hours and minutes. Write a friend function
to add two time objects */
#include <iostream>
using namespace std;
class Time
{
private:
    int mints;
    int hour;

public:
    Time(){}; // Default constructor
    Time(int hr, int min)
    {
        hour = hr;
        mints = min;
    };
    void TimeInput(int hr, int min)
    {
        hour = hr;
        mints = min;
    };
    void displayTime()
    {
        cout << "The hours are : " << hour << endl;
        cout << "The minutes are : " << mints << endl
             << endl;
    };

    friend Time TimeAdd(Time t1, Time t2)
    {
        Time final;
        final.mints = t1.mints + t2.mints;
        final.hour = final.mints / 60;
        final.mints = final.mints % 60;
        final.hour = final.hour + t1.hour + t2.hour;
        return final;
    };
};

int main(int argc, char const *argv[])
{
    Time t1, t2, t3;
    t1.TimeInput(2, 24);
    t2.TimeInput(3, 58);
    t1.displayTime();
    t2.displayTime();
    t3 = TimeAdd(t1, t2);
    cout << "The hours and minutes after sum " << endl;
    t3.displayTime();
    return 0;
}