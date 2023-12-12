#include<iostream>
using namespace std;
  

  class classroom{
     protected:
    string name,address,dept;
    
   public:
    
     virtual void show_data()=0;//pure virtual function
     
     virtual void get_data(){  //simple virtual function
       cout<<"\n\nBase class function called\n Internally the basic details are alocatted. \n";
     name="abcd";
     address="#1234";
     dept="xyz";

     }
  };

class student:public classroom{

     public:
     void show_data(){
       cout<<"\nclass student's function called:\nName is "<<name
        <<"\nAddress: "<<address
        <<"\nDepartment: "<<dept
        <<endl;
     }
void show(){
    cout<<"\n student\n ";
}
     void get_data(){
      cout<<"\n\nDerived class ( student ) 's function called.\n ";
        cout<<"Enter name: ";
        cin>>this->name;
        cout<<"Enter address: ";
        cin>>this->address;
        cout<<"Enter department: ";
        cin>>this->dept;
     }
};

class professor:public student{

    public:
    void show_data(){
         
        cout<<"\nclass professor's function called:\nName is "<<name
        <<"\nAddress: "<<address
        <<"\nDepartment: "<<dept
        <<endl;
        
    }
    void get_data(){
       cout<<"\n\nDerived class ( professor ) 's function called.\n ";
        cout<<"Enter name: ";
        cin>>this->name;
        cout<<"Enter address: ";
        cin>>this->address;
        cout<<"Enter department: ";
        cin>>this->dept;
    }
} ;

int main(){
//code
// classroom class1; //we can't create an instance of abstract class 


student ob2;
professor ob3;

//without pointer function overriden
ob2.get_data();
ob2.show_data();
// ob2.classroom::show_data();
ob2.classroom::get_data();

//with pointer function overriden
classroom  *ptr;
ptr = &ob3;
ptr->get_data();
ptr->show_data();


ptr= &ob2;
// ptr->show(); 
((student*)ptr)->show();
 
return 0;
}