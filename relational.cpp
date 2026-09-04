#include  <iostream>
using namespace std;

int main(){
    int cups;
  cout<<"Enter the Number of cups:"<<endl;
 cin>>cups;

 if(cups > 20){
     cout<<"You won Gold Badge"<<endl;
 }else if(cups >= 10 && cups <=20){
    cout<<"You won Silver Badge "<<endl;

 }else{
     cout<<"You won Bronze Badge"<<endl;
     
 }
 return 0;

}