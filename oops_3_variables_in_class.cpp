#include <iostream>
using namespace std;
class variables
{

    // private use to make private variable in class i.s only class can access the variables
     
  

private:
    int a;
    int x = 20;

public:
    int b;
    void get_data();
    void displaya();
    void displayb();
    void new_data()
    {
        cout << "new data--> " << a*x<< endl;
    }
};
void variables ::get_data()
{
    cout << "enter the vlaue of a--> ";
    cin >> a;
}
void variables ::displaya()
{
    cout << "Accessed variable a's value--> " << a << endl;
}

void variables ::displayb()
{
    cout << "Accessed variable b's value--> " << b << endl;
}

int main()
{

    variables v, w;
    cout << "enter the value of variable b--> ";
    cin >> w.b;
    //  cin>>v.a; it will give you a error because a is a private variable in class named-variables .only class & class functions can access that variable.
    v.get_data();
    v.displaya();
    w.displayb();
    v.new_data();
}