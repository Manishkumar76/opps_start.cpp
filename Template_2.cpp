#include <iostream>
using namespace std;

template <class t, class t2>

class MyClass
{
    t a;
    t2 b;

public:
    MyClass(t x, t2 y)
    {
        cout <<"object crated\n";
        a = x;
        b = y;
    }
    void display()
    {
        cout <<"value of a= " << a << "\nvalue of b= " << b << endl;
    }
};

int main()
{

    MyClass<int, int> ob1(2, 4);

     ob1.display();

    MyClass<char, float> ob2('A', 4.6);

     ob2.display();

    MyClass<string,double>ob3("RangerStar",09.56324);
    
    ob3.display();

    return 0;
}