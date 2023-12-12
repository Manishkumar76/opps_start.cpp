#include <iostream>
#include <fstream>
using namespace std;
class employee
{
private:
char name[10];
int id;
public:
void getdata(); // Function to get employee data from user
void displaydata(); // Function to display employee data
};
void employee::getdata()
{
cout << "Enter name: ";
cin >> name;
cout << "Id: ";
cin >> id;
cout << endl;
}
void employee::displaydata()
{
cout << "Name: " << name << "\nId: " << id << endl;
}
int main()
{
employee emp;
fstream file;
file.open("filename.txt", ios::in | ios::out | ios::binary | ios::ate);
file.seekg(0);
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>CURRENT
DATA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
cout << "Current data: " << endl;
while (file.read((char *)&emp, sizeof(emp)))
{
emp.displaydata();
}
file.clear(); // to get rid of eof flag which gives error if we try to
// write after this point
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>MODIFY DATA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
cout << "\nTo change a Employee data\nEnter Employee no. to be changed: ";
int num;
cin >> num;
int location = (num - 1) * sizeof(emp); // to find the location of object.
file.seekp(location); // setting pointer to location.
emp.getdata(); // getting data from user.
file.write((char *)&emp, sizeof(emp));
// Displaying data.
cout << "\nEmployee data modified: " << endl;
file.seekg(0);
while (file.read((char *)&emp, sizeof(emp)))
{
emp.displaydata();
}
file.clear();
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>ADD NEW
DATA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
cout << "\nAdd new Employee: " << endl;
emp.getdata();
file.write((char *)&emp, sizeof(emp));
file.seekg(0);
while (file.read((char *)&emp, sizeof(emp)))
{
emp.displaydata();
}
file.close();
return 0;
}