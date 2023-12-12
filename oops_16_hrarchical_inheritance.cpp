#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle { 
public: 
    Vehicle() 
    { 
        cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// first sub class 
class Car: public Vehicle { 
public: 
    Car() 
    { 
        cout << "This is a Car" << endl; 
    } 
}; 
  
// second sub class 
class Bus: public Vehicle { 
public: 
    Bus() 
    { 
        cout << "This is a Bus" << endl; 
    } 
}; 
  
// main function 
int main() 
{     
    // creating object of sub class will 
    // invoke the constructor of base class 
    Car obj1; 
    Bus obj2; 
    return 0; 
}