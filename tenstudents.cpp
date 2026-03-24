#include <iostream>
using namespace std;

class Student
{
    int roll;
    char name[30];
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No, Name and Marks: ";
        cin >> roll >> name >> marks;
    }

    void display()
    {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }
};

int main()
{
    Student s[10];   // Array of objects

    for (int i = 0; i < 10; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].input();
    }

    cout << "\nRoll\tName\tMarks\n";
    for (int i = 0; i < 10; i++)
    {
        s[i].display();
    }

    return 0;
}
