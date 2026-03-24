#include <iostream>
using namespace std;

class Area
{
public:
    void triangle()
    {
        float base, height;
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;

        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }

    void circle()
    {
        float radius;
        cout << "Enter radius of circle: ";
        cin >> radius;

        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Area obj;     // Object creation
    obj.triangle();
    obj.circle();

    return 0;
}
