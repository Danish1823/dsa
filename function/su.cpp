#include <iostream>
using namespace std;

int sum(int a,int b){
    int ans =a+b;
    return ans;
}
int main(){
    int m,n;
    cout<<"Enter two Number:";
    cin>>m>>n;
    int result= sum(m,n);
    cout<<result;
   return 0;
};