#include<iostream>
using namespace std;
  
 
int main(){
  int x;
 cout<<"enter the integer value ";
 cin>>x;
//code
try{
if(x==0){throw x;}
else if(x>0){throw (9.0);}
else {
    throw 'A';}
}

catch(int y){
 cout<<"integer exception occured\n";
}
catch(char y){
 cout<<"Character exception occured\n";
}
catch(double t){
 cout<<"Float exception occured\n";
} 
 
return 0;
}