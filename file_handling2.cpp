#include<iostream>
#include<fstream>
using namespace std;
  
class myClass{
//protect:
//private:
public:
int rol_no;
string name;

myClass(int x,string name){
    this->name=name;
    rol_no=x;

}

void put_data(){
  cout<<"name ="<<this->name<<"\nroll no ="<<rol_no<<endl;
}
 };
 
int main(){
  
  myClass ob1(78,"manish");
  // string str="manish kumar";

  fstream file;
  file.open("data.tx",ios::out|ios::in);

  if(!file.is_open()){
    exit;
    }
  file.write((char* )&ob1,sizeof(ob1));
  ob1.put_data();
  file.close();


//code
// file.seekg(0);


// file.open("data.txt",ios::in);

if(!file.is_open()){
  exit;
}
file.read((char*)&ob1,sizeof(ob1));
  ob1.put_data();
file.close();
 
return 0;




// fstream write_obj; // creation of fstream class object.
// // by default, openmode = ios::in|ios::out mode
// // Automatically overwrites the content of file, to append
// // the content, open in ios:app
// // write_obj.open("sample.txt", ios::in|ios::out|ios::app)

//  //?opening file in output stream
// write_obj.open("filename.txt",ios::out);
// // mode.
// if(!write_obj) // checking if file is opened correctly.
// {
// cout <<"file creation failed";
// exit(1);
// }
// write_obj << "MY NAME IS MAXCODER\nhello";

// cout<<"position of output pointer=> "<<write_obj.tellp()<<endl;
// write_obj.seekp(4,ios_base::cur);
// cout<<"position of output pointer=> "<<write_obj.tellp()<<endl;
//  //writing to file.
// write_obj.close(); //Closing output stream.


// //? opening file in input stream.
// fstream read_obj;
// read_obj.open("filename.txt",ios::in); 
// if(!write_obj) // checking if file is opened correctly.
// {
// cout<<"file creation failed";
// exit(1);
// }

// string str;
// while(getline(read_obj, str)){
//   cout<<str<<endl;
// } // reading from file.
// // cout << str << endl;
// read_obj.seekg(4,ios_base::beg);
// cout<<"position of input pointer=> "<<read_obj.tellg()<<endl;
// read_obj.close(); // closing input stream.
// return 0;
}