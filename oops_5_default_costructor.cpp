#include<iostream>
#include<string.h>
using namespace std;

class vehicle{

     string type,name;
    public:
         vehicle();   //declaration of constructor
        // vehicle(){           //--> this is a constructor 
        //     name="lambo";
        // }
        void display();
        void getdata();
};

  vehicle::vehicle(){                 //definition of constructor outside of the class
    cout<<"bike \ncar \nenter the type of your vehicle--> ";
    cin>>type;
    cout<<"enter company name of vehicle--> ";
    cin>>name;
 }
 
void vehicle::display(){
    if(type=="bike"){
        cout<<"your vehicle is two wheeler.\n";

    }
    else if(type=="car"){
        cout<<"your vehicle is four wheeler.\n";
    }
    cout<<"Name of your vehicle is --> "<<name<<endl;
    
}
int main(){
    
    vehicle v;
    v.display();

}