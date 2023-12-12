/*                                                    EXPLICIT CONSTRUCTOR    
                                               
         An explicit constructor is a constructor that can only be used in direct initialization. It prevents implicit conversions from taking place when initializing an object. An explicit constructor is declared with the keyword explicit before the constructor's parameter list. This keyword indicates to the compiler that the constructor should not be used for implicit conversions.

         For example, if a class has an explicit constructor that takes an int as a parameter, then the following code will not compile:

         MyClass obj = 5; // Error - explicit constructor

         However, the following code will compile:

         MyClass obj(5); // OK - direct initialization
   
*/

#include <iostream>
using namespace std;
 
class Test
{
    int x;
public:
        // Explicit Constructor
    explicit Test(int i) { x = i; }
    int getX() { return x; }
};
 
int main()
{
    // Test t1 = 10; //  CAUSE ERROR
    Test t2 = Test(20); // OK
    Test t3 = (Test)30; // OK
    Test t4 = (Test)(40); // OK
 
    cout << t2.getX() << " "
         << t3.getX() << " " << t4.getX();
    return 0;
}