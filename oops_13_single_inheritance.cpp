#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;

    employee()
    {
        id = 233;
        salary = 40000;
    }
};

class programer : private employee
{
public:
    int language_code = 9;
    programer() : employee()
    {
        cout << "employee's Id--> " << id << "\nemployee's salary--> " << salary << endl
             << "the language_code is--> " << language_code << endl;
    }
};

int main()
{
    programer obj1;

    // obj1.id;  /*---> this throws error because the mode of inheritance is private means that the derived class access the member of base class but not ouside of the derived class and the visibility of base class during inheritence is private*/
    employee obj2;

    cout << obj2.id;
}