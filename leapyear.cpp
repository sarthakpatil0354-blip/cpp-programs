#include <iostream>
using namespace std;

class LeapYear
{
private:
    int year;

public:
    void input()
    {
        cout << "Enter a year: ";
        cin >> year;
    }

    void check()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << "Leap Year";
        else
            cout << "Not a Leap Year";
    }
};

int main()
{
    LeapYear obj;
    obj.input();
    obj.check();
    return 0;
}
