/*Define	a	Time	class	containing	hours	and	minutes	as	private members	and
    an	overloaded	++	operator	function.	Create	objects	of this	class	in	main()
and	call	the	operator	function	++	to	increment the	time	by	1	minute. */
#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m)
    {
    }
    void inputTime()
    {
        cout << "Enter hours (0-23)   : ";
        cin >> hours;
        while (hours < 0 || hours >= 24)
        {
            cout << "Invalid hours. Enter again (0-23)    !!";
            cin >> hours;
        }

        cout << "Enter minutes (0-59) : ";
        cin >> minutes;
        while (minutes < 0 || minutes >= 60)
        {
            cout << "Invalid minutes. Enter again (0-59)  !!";
            cin >> minutes;
        }
    }
    void displayTime() const
    {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << endl;
    }

    // Overloaded ++ operator to increment time by 1 minute
    Time &operator++()
    {
        ++minutes;
        if (minutes >= 60)
        {
            minutes = 0;
            ++hours;
            if (hours >= 24)
            {
                hours = 0;
            }
        }
        return *this;
    }
};

int main()
{
    Time t;
    t.inputTime();
    cout << "--------------------------------\n";
    cout << "Initial Time         : ";
    t.displayTime();
    ++t;
    cout << "--------------------------------\n";
    cout << "After increment 1 minute : ";
    t.displayTime();
    cout << "=================================\n";

    return 0;
}
