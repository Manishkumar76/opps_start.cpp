#include<iostream>
using namespace std;

class A{
    protected:
    int a=9;
     public:
    void show(){

      cout<<"function of class A\nvalue of a is--> "<<a<<endl;
     }
};
class B: public A{
    
     int d=3;
     
     public:
     void show(){
        cout<<"function of class B\nvalue of a--> "<<a<<"\nvalue of d--> "<<d<<"\nsum of a and d--> "<<a+d<<endl; 
     }
};

int main(){

    /*there are two ways of function overriding -->
                                                   1.run-time 
                                                   2.compile-time
                                                   */

        B b;
        b.show();    //---> call the Function of class B    

      //1.Run-time 

      A *ptr;
      ptr=&b;
//  // by using virtual function to access the function of class B 
      ptr->show();
     
     //2.compile-time
    //   b.A::show();

    
         

 }