#include <iostream>
using namespace std;

class Prime
{
public:
    Prime()
    {
        int n, flag = 1;
        cout << "Enter a number: ";
        cin >> n;

        if (n <= 1)
            flag = 0;

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << "Number is Prime";
        else
            cout << "Number is Not Prime";
    }
};

int main()
{
    Prime obj;   // Constructor runs automatically
    return 0;
}
