//?Multilevel inheritance

#include<iostream>
using namespace std;
  
class Addition{
private:
int a=5,b=9;

public: 
int c;
Addition(){
    cout<<"Addition operation performed\n";
    c=a+b;
}

 };
 
 class Subtraction:protected Addition{
 
 protected:
 Addition o1;
 int c;
 private:
 int a=5,b=3;
 public:
 Subtraction(){
    cout<<"Subtraction operation performed\n";
    c=a-b;
 }
 };
 class Multiplication:public Subtraction{
  int a=4,b=6;

  protected:
  int c;
  public:
  Multiplication(){
    cout<<"multiplication operation performed\n";
    c=a*b;
    Addition ob; //todo:create an object of class Addition 
    //!we can't access the variable a because a is a private variable which can't inherited 
    // ob.a;  
  }
 };

 class Answer: protected Multiplication{
   public:
   Answer(){
    cout<<"your answers--> \n";
   }

    void display(){
    cout<<"Addition -> "<<Multiplication::o1.c<<
    "\nSubtraction --> "<<Subtraction::c<<"\nMultiplication --> "<<c<<endl;
  }


 };

int main(){
  
  Answer ob1;
  ob1.display();
//code
 
return 0;
}