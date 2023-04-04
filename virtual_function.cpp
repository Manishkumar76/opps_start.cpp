/*                                              virtual functions
       A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 
       */

#include<iostream>
using namespace std;

class base{
    public:
    int a;
 virtual void show(){
        cout<<"value of a-> "<<a<<endl;
    }
};
 
class derived:public base{
    public:
    int d;
   void show(){
        cout<<"\nvalue of d--> "<<d<<"\nvalue of a--> "<<a;
    }
};

int main(){
    base bc;
     base *bptr;
     bptr=&bc;
     bptr->a=100;
     bptr->show();

     derived dc;
     derived *dptr;
     bptr=&dc;
     bptr->a=200;
    //  bptr->d=300;  // --> this make error because pointer of base class can't access directly to the variables of derived class
   
    dc.d=300;
    bptr->show();  //--> now this will access the fuction of derived class because in base class we make virtual fuction 
     dptr=&dc;
     dptr->show();
    
  return 0;
}