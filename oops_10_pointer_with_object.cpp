#include <iostream>
using namespace std;

class complex
{
  int real, img;

public:
  void set_data(int a, int b)
  {
    real = a;
    img = b;
  }
  void diaplay()
  {
    cout << real << " + " << img << "i" << endl;
  }
};

int main()
{

  // first way to create a pointer of an object
  complex ob1;
  complex *ptr = &ob1;

  // first way to access the members of class through pointer
  (*ptr).set_data(2, 4);
  (*ptr).diaplay();

  // Second way to access the members of class through pointer
  ptr->set_data(4, 3);
  ptr->diaplay();

  // second way to create a pointer of an object

  complex *ob2 = new complex;
  (*ob2).set_data(8, 9);
  ob2->diaplay();

  return 0;
}