#include<iostream>
using namespace std;
int count=0;
class student{

    public:
    int roll_no;
    string name;
    student(int i,string j){
        count++;
        cout<<"\nconstructor "<<count<<" invoked--> \n";
        roll_no=i;
        name=j;
    }
  
    void display(){
        cout<<"name--> "<<name<<"\nroll no--> "<<roll_no<<endl<<endl;
    }
};

int main(){
    student ob1(123,"xyz");  //auto-calls the constructor and send the parameters
    ob1.display();
    cout<<"enter your friends name--> ";
    string name;
    cin>>name;
    cout<<"enter his roll_no--> ";
    int roll_no;
    cin>>roll_no;
    student ob2(roll_no,name);
    cout<<"your friend's details-->\n";
    ob2.display();
}