#include <iostream>
using namespace std;

class calculate
{

    int real, imag;

public:
    calculate(){};
    calculate(int a, int b)
    {    
        
        real = a;
        imag = b;
    }

    void operator--()
    {
        cout << "decrement the value of The object--> \n";
        real = --real;
        imag = --imag;
    }
    calculate operator%(int c)
    {
        cout << "Modulus operation get execute--> \n";
        real = real % c;
        imag = imag % c;
        return *this;
    }

    calculate operator%(calculate s)
    {
        calculate temp;
        cout << "Modulus operation get execute--> \n";
        temp.real = real % s.real;
        temp.imag = imag % s.imag;
        return temp;
    }

    void display()
    {
        cout << "the value of real --> " << real
             << "\nthe value of imag --> " << imag << endl;
    }
};

int main()
{

    calculate ob1(3, 8);
    --ob1;
    ob1.display();
    calculate ob2(9, 8);
    ob2 = ob2 % 4;
    ob2.display();
    calculate ob3(7,9);
    calculate ob4;
    ob4 = ob1 % ob3;
    ob4.display();
    // code

    return 0;
}