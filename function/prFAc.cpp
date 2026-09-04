#include <iostream>
using namespace std;

// PRIME NUMBER CHECKER

bool prime(int a){
    if(a<2){
        return 0;
    }
    for(int i=2;i<=a;i++){
         if (a%i==0){
        return 0;
    }
    return 1;
}
  
}

// FACTORIAL CALCULATOR

int fact(int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans =ans*i;
    }
    return ans;
}

int main(){
    int m;
    cout<<"Enter A Number:"<<endl;
    cin>>m;
   int result= prime(m);
   cout<<result<<endl;
   int n;
   cout<<"Enter second number: "<<endl;
   cin>>n;
  int re= fact(n);
  cout<<re<<endl;
  return 0;
}