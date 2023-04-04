#include<iostream>
using namespace std;

class mobile{
    public:
    string company;
    //constructor
    mobile(){
        cout<<"object and constuctor is created\n";
        cout<<"enter your mobile company --> ";
        cin>>company;
     }

     void display(){
        cout<<"object call a function\n";
        cout<<"your mobile's company is --> "<<company<<endl;
     }

//destructor
   ~mobile(){
    cout<<"your object is distroyed ";
   }
};

int main(){
     mobile phone;
    phone.display();

}