#include<iostream>
#include<math.h>
using namespace std;
   
   void logrithum(int x){
     
        if(x==0){
            throw x;
        }
        else{
            cout<<"logrithumic value is-> "<<log(x)<<endl;
        }
     
   }

int main(){
  try{
     logrithum(50);
  logrithum(0);
//   logrithum(50);//can't executed because 
  }
//code 
 catch(int b){
        cout<<"undefined\n";
     }
    //  logrithum(0); terminate called after throwing an instance of 'int'
  
   cout<<"answered\n";
return 0;
}