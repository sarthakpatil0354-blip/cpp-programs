#include <iostream>
using namespace std;

class Sum
{
public:
    Sum()
    {
        int n, sum = 0;
        cout << "Enter a natural number: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        cout << "Sum of Natural Numbers = " << sum;
    }
};

int main()
{
    Sum obj;   // Constructor is called automatically
    return 0;
}
