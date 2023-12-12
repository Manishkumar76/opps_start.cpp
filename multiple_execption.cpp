#include<iostream>
using namespace std;
  
  void devide(int x,int y){
    try{
        if(y==0){
            throw y;
        }
        else{
            cout<<x/y<<endl;

        }
    }
    catch(int y){
        cout<<"function's catch block executed\n";
        throw y;
    }
  }
 
int main(){
  
  try{
   
    devide(4,2);
     devide(3,0);


  }
  catch(int i){
    cout<<"main function's catch block executed\nundefined\n";
  }
//code
 
return 0;
}