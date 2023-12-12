#include <iostream>
using namespace std;

class Class1
{
protected:
    int x = 0;

    // private:
public:
    Class1()
    {
        cout << "baseClass Class1's constuctor called.\n";
    }
    void display()
    {
        cout << "x = " << x << endl;
    }
};

class Class2
{
protected:
    char y = 'A';

public:
    Class2()
    {
        cout << "BaseClass Class2's constructor called.\n";
    }
    void display()
    {
        cout << "y = " << y << endl;
    }
};

class Derived : private Class1, private Class2
{

public:
    Derived()
    {
        Class1::x = 5;
        Class2::y = 'a';
        cout << "Derived class's construntor called.\n";
    }
    void display()
    {
        cout << "derived class's function called\n";
        Class1::display();
        Class2::display();
    }
};

int main()
{
    Derived ob1;
    ob1.display();

    Class1 ob2;
    ob2.display();
    // code
    Class2 ob3;
    ob3.display();

    return 0;
}