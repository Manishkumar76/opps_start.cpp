#include<iostream>
using namespace std;
  
class ClassName{
protected:
 static int count ;
 int a=0;
 const int b=0;
//private:
public:
ClassName():b(9){
    count++;
    cout<<"object "<<count<<endl;
     //b=9; //!this cause error b is a constant variable whos value cannot changed
}

  static void fun(){  
    count++;
    // a=0; //!cause error because it is nonstatic data-menber
  }
  int fun2 ()const{
        //    a++;
           return a;
  }
 
 };

int ClassName::count=0;


int main(){
  
//code
   ClassName ob1,ob2;
   ob2.fun();
return 0;
}