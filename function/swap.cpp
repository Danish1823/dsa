#include <iostream>
using namespace std;

void swap(int &a, int &b){
      int c;
      c=a;
      a=b;
      b=c;
}

int main(){
    int a,b;
    cout<<"Enter Two Number:"<<endl;
    cin>>a>>b;

  swap(a,b);
    cout<<"After Swapping:"<<" a = "<<a<<"  And b= "<<b<<endl;
    return 0;
}