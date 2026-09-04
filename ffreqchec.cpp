#include<iostream>
using namespace  std;
int freqchec(int number, int arr[], int n){
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==number){
        count++;
    }
 }
 return count;
}
int main(){
    int n=4;
    int arr[]={1,2,3,1};
    int number=1;
    int store=freqchec(number,arr,n);
    cout<<store;
}