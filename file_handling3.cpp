#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int scale[3] = {13, 49, 203};
fstream file;
file.open("filename.txt");
file.write((char *)scale, sizeof(scale));

file.seekg(0);
for (int i = 0; i < 3; i++)
{
scale[i] = 0;
}
for (int i = 0; i < 3; i++)
{
cout<<scale[i]<<endl;
}

file.read((char *)scale, sizeof(scale));
for (int i = 0; i < 3; i++)
{
cout << scale[i] << endl;
}
cout<<"position=> "<<file.tellp()<<endl;
file.seekp(3,ios_base::cur);
cout<<"position=> "<<file.tellp()<<endl;
return 0;
}