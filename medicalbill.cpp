#include <iostream>
using namespace std;

class MedicalBill
{
public:
    MedicalBill()
    {
        float consultation, medicine, test, total;
        cout << "Enter consultation charge: ";
        cin >> consultation;
        cout << "Enter medicine charge: ";
        cin >> medicine;
        cout << "Enter test charge: ";
        cin >> test;

        total = consultation + medicine + test;
        cout << "Total Medical Bill = " << total;
    }
};

int main()
{
    MedicalBill obj;   // Constructor is called automatically
    return 0;
}
