#include <iostream>
using namespace std;

int main(){
    bool isStudent;
    int cups;
    cout<<"Are you a student?(1 for yes 0 for NO)"<<endl;
    cin>>isStudent;
    cout << "Enter the Number of cups:"<<endl;
    cin >> cups;
    if(isStudent || cups >15){
        cout<< "You are  Eligible for Discount"<<endl;
    }else{
        cout<<"You are not Eligible for Discount"<<endl;
    }
   return 0;

}