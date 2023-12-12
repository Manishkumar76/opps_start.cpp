/*
                               create a class by using c++ in oops

*/

#include <iostream>
#include <string.h>
using namespace std;

class employee
{
public:
  int d, e;
  char s[5];
  string r;
  void display(); // Declaration

  void get_data()
  {
    cout << "enter the value of d--> ";
    cin >> d;
    cout << "enter the value of e--> ";
    cin >> e;
  }
};

void employee ::display()
{
  cout << "the value of d is --> " << d;
  cout << "the value of e is --> " << e;

  cout << "the value of string s is --> " << r;
}

int main()
{

  employee manish;
  //  manish.s= "abcd";
  manish.r = "abcd";
  // manish.a=345; it can not access because a is a privarte varable in class-employee , only class's functions access the variables.
  manish.get_data();
  manish.display();
  return 0;
}
