#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    void get_data();
    student greater(student &i);
};
void student::get_data()
{
    cout << "enter the name of student--> ";
    cin >> name;
    cout << "enter the age of student--> ";
    cin >> age;
}
student student::greater(student &i)
{
    if (this->age > i.age)
    {
        return *this;
    }
    else
    {
        return i;
    }
}

int main()
{
    student s1, s2;
    s1.get_data();
    s2.get_data();

    cout << "greater--> " << s1.greater(s2).name;
    return 0;
}