#include <iostream>
#include<string>
using namespace std;


int main (){
    string TeaOrder;
    
   
    cout<<"Enter Your Tea Order: "<<endl;
     getline(cin,TeaOrder);

    if (TeaOrder ==  "Green Tea"){
        cout<<"You Order Green tae "<<endl;
    }else{
        cout<<"You did not order Green Tea "<<endl;
    }
    return 0;

}
