#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
  template<typename t,typename t2>
void objects(t a,t2 a2){
    cout<<"value of a+b=> "<<a+a2<<endl;

}
template<typename t>
void objects(t a){
    cout<<"value of a=> "<<a<<endl;

}
 
int main(){
    objects<int,double> (3,0.234);
    objects<char,char> ('A','A');
    objects<string,string> ("manish","kumar");
    objects<float>(8.6,34.5);
    objects<char>('a','b');
    objects<string>("manish","kumar");  

    // objects<int>(7);
    
//     char a='a';
//    char b='b';
//    cout<<a+b;
 
return 0;
}