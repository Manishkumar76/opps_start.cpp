#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;

 int a=0,b=0;
  // ifstream in("input.txt");//*read from file 
  //  in>>a>>b;

    ifstream in;
    in.open("input.txt");
    
    in>>str;
    in>>a>>b;
    //  getline(in,str);
    // cout<<str;

    // str="manish kumar";
    ofstream out("output.txt");//*write in the file
    
    out<<a*b;

}
