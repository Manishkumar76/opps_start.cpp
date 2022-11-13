/*                               
                               create a class by using c++ in oops
     
*/
  
#include<iostream>
using namespace std;

class employee
{
    private:
     int a,b,c;
     public:
     int d,e;
     void set_data(int a1,int b1,int c1); // Declaration

    void get_data(){
        cout<<"the value of a is "<<a<<endl;
         cout<<"the value of b is "<<b<<endl;
          cout<<"the value of c is "<<c<<endl;
           cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
     }
};

void employee :: set_data(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
       
       employee manish;
       manish.d=34;
       manish.e=5;
     //manish.a=345; it can not access because a is a privarte varable in class-employee , only class's functions access the variables.
       manish.set_data(1,3,2);
       manish.get_data();
    return 0;

}