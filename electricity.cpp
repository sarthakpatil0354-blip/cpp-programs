#include <iostream>
using namespace std;

class ElectricityBill
{
    float units, bill, discount, finalBill;

public:
    void input()
    {
        cout << "Enter units consumed: ";
        cin >> units;
    }

    void calculate()
    {
        if (units <= 100)
            bill = units * 1.5;
        else if (units <= 200)
            bill = (100 * 1.5) + (units - 100) * 2.0;
        else
            bill = (100 * 1.5) + (100 * 2.0) + (units - 200) * 3.0;

        discount = bill * 0.02;   // 2% discount
        finalBill = bill - discount;
    }

    void display()
    {
        cout << "Total Bill = " << bill << endl;
        cout << "Discount (2%) = " << discount << endl;
        cout << "Final Bill = " << finalBill << endl;
    }
};

int main()
{
    ElectricityBill obj;
    obj.input();
    obj.calculate();
    obj.display();
    return 0;
}
