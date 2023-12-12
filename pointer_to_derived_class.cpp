#include <iostream>
using namespace std;

class base
{
    // todo: protect:

    //todo: private:
public:
    int a;
    base()
    {
        cout << "base class\n";
    }
    void display()
    {
        cout << "a= " << a << endl;
    }
};

class derived : public base
{
public:
    int c;
    derived()
    {
        cout << "derived class\n";
    }
    void display()
    {
        cout << "c= " << c << endl;
    }
};

int main()
{

    base ob1;
    base *ptr;
    derived ob2;
    ptr = &ob2;
    derived *ptr2;

    ptr2 = &ob2;
    //   ptr->c; //!it will throw error because pointer of base class can't access the variable of derived class because base class not inherited form base class

    ptr2->a = 0;
    ptr2->c = 8;
    ptr2->display();//*this access the member function of derived class

    ptr->display();//*this access the member function of derived class

    // code

    return 0;
}