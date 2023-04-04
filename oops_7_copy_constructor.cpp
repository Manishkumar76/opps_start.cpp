#include <iostream>
using namespace std;

class student
{

public:
    int roll_no;
    string name;
    student(){
        cout<<"Default constructor invoked--> \n";
    }  // this constructor for ob1 which have not any parameter 
    student(student &i)
    {   string last;
        cout<<"Parameter constructor invoked --> \n";
    cout<<"enter your last name--> ";
    cin>> last;
        roll_no = i.roll_no;
        name = i.name+" "+ last;
    }
    void get_data()
    {
        cout << "enter your name--> ";
        cin >> name;
        cout << "enter the roll_no--> ";
        cin >> roll_no;
    }

    void display()
    {
        cout << "name--> " << name << "\nroll no--> " << roll_no << endl;
    }
};

int main()
{
    student ob1;
    ob1.get_data();
    cout << "data of ob1-->\n";
    ob1.display();

    student ob2(ob1);
    cout << "data of ob2--> \n ";
    ob2.display();
    cout<<endl;
     ob1.display();

}