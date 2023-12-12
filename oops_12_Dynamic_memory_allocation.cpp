#include <iostream>
using namespace std;

class myclass
{
    string dept, sec;
    int st_no;
    static int count;

public:
    myclass()
    {
        count++;
        cout << "Dynamic object " << count << " is created--> " << endl;
    }
    myclass(string dept_, string sec_, int st_no_) : dept(dept_), sec(sec_), st_no(st_no_)
    {
        count++;
        cout << "Dynamic object " << count << " is created--> " << endl;
    }
    ~myclass()
    {
        cout << "\nThe object " << count << " is distroyed: \n";
        count--;
    }

    void display();
};
int myclass::count = 0;
void myclass::display()
{
    cout << "\nDepartment: " << dept
         << "\nSection: " << sec
         << "\nNumber of Students: " << st_no
         << endl;
}
int main()
{

    myclass *ob1 = new myclass("CSE", "A", 72);
    ob1->display();
    {
        myclass *ob2 = new myclass;
        ob2->display();

        // code
        delete ob2; // with encounter this the destructor calls
    }
    delete ob1;
    return 0;
}