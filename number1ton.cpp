#include <iostream>
using namespace std;

class PrintNumbers
{
public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    PrintNumbers obj;
    obj.print(n);

    return 0;
}
