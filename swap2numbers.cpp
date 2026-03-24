#include <iostream>
using namespace std;

class Swap
{
public:
    void swapNum(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swap obj;
    obj.swapNum(x, y);

    cout << "After swapping:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
