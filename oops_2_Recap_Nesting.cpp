#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};

void binary ::read(void)
{
    cout << "enter a binary number --> " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format --> " << endl;
            exit(0);
        }
    }
}

int main()
{

    // oops- classes and objects

    // c++ --> initially called --> c with classes by stroustroup
    // class --> extension of structures (in c)
    // struture had limitations
    //         - members are public
    //         -no methods
    // classes --> structres + more
    //        --> can have methods and poperties
    //        --> can make few members as private & few as public
    // structures in c++ are typedefed
    //
    // nesting of member fuctions
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}
