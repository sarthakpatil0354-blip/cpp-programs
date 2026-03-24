#include <iostream>
using namespace std;

class Prime
{
public:
    void checkPrime()
    {
        int n, i, count = 0;
        cout << "Enter a number: ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            cout << "Number is Prime";
        else
            cout << "Number is Not Prime";
    }
};

int main()
{
    Prime obj;
    obj.checkPrime();
    return 0;
}
