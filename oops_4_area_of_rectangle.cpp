#include<iostream>
using namespace std;

class rectangle
{
   public:
   
     int get_area(int a,int b);
    void get_data();
};

int rectangle::get_area(int a, int b){
         return (a*b);
}

int main(){
    int a,b;

      cout<<"enter the length of rectangle--> ";
      cin>>a;
      cout<<"enter the breath of rectangle--> ";
      cin>>b;

     rectangle area;
    
    int ans= area.get_area(a,b);
cout<<"enter the area--> "<<ans;
}