#include <iostream>
using namespace std;

class Palindrome
{
public:
    inline void check(int n)
    {
        int rev = 0, temp = n;

        while (n > 0)
        {
            rev = rev * 10 + (n % 10);
            n = n / 10;
        }

        if (temp == rev)
            cout << "Palindrome Number";
        else
            cout << "Not a Palindrome Number";
    }
};

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Palindrome obj;
    obj.check(num);
    return 0;
}
