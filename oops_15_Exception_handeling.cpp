#include<iostream>
using namespace std;
  
int main(){
  

  float a,b;

  cout<<"enter the two numbers-> ";
  cin>>a>>b;
  try{
    if(b==0){
        throw b;

    }
    else{
         cout<<"the answer is-> "<<a/b<<endl;
    }
  }
  catch(float x){
     cout<<"the division of these value is undefined.\n";
  }
//code
 
return 0;
}