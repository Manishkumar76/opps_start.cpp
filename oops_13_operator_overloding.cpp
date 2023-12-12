#include <iostream>
using namespace std;

class calculate
{
    int a, b;

public:
calculate(){}
    calculate(int x, int y)
    {
        cout << "value assigned\n";
        a = x;
        b = y;
    }
    void operator--()  //pre-decrement
    {
        a = --a;
        b = --b;
    }

    void operator--(int) //post-decrement
    {
        a= a--;
        b= b--;
    }

    void operator++()  //pre-increment
    {
        a = ++a;
        b = ++b;
        // return *this;
    }
     void operator++(int )  //post-increment
    {
        a = a++;
        b = b++;        // return *this;
    }
     
     calculate operator +(calculate c){
        calculate temp;  //default constructor must be needed
        temp.a=a+c.a;
        temp.b=b+c.b;
          return temp;
     }
      calculate operator -(calculate c){
        calculate temp;  //default constructor must be needed
        temp.a=a-c.a;
        temp.b=b-c.b;
          return temp;
     }

      calculate operator %(calculate c){
        calculate temp;  //default constructor must be needed
        temp.a=a%c.a;
        temp.b=b%c.b;
          return temp;
     }

    void display()
    {
        cout << "a: " << a << "\nb: " << b << endl;
    }
};

int main()
{

    calculate ob1(3, 6);
    ob1--;
     
    ob1.display();
    // code
    calculate *ob2 = new calculate(6, 7);
    
    // calculate ob2(6,7);
    ++(*ob2);
    
    ob2->display();
     (*ob2)++;

    ob2->display();
   
   calculate ob3(55,7),ob4(6,7),ob5;

   ob5=ob3+ob4;
   ob5.display();

//    ob5=ob4+ob2;   this cause error because dynamic object's pointer point to the first element of the object so the (*object)   ob5.display();
     ob5=ob4+(*ob2);
      ob5.display();

      ob5=ob3-ob4;
      ob5.display();
     
     ob5=ob3%ob4;
      ob5.display();


    return 0;

}