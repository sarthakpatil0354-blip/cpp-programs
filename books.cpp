#include <iostream>
using namespace std;

class Library
{
    int book_id, copies;
    char book_name[30];

public:
    void input()
    {
        cout << "Enter Book ID, Book Name and Copies: ";
        cin >> book_id >> book_name >> copies;
    }

    void display()
    {
        cout << "\nBook ID: " << book_id;
        cout << "\nBook Name: " << book_name;
        cout << "\nAvailable Copies: " << copies;
    }

    void issue()
    {
        if (copies > 0)
        {
            cout << "\nBook Issued Successfully";
            copies--;
        }
        else
        {
            cout << "\nBook Not Available";
        }
    }
};

int main()
{
    Library obj;
    obj.input();
    obj.display();
    obj.issue();
    return 0;
}
