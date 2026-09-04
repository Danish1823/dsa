#include<iostream>
using namespace std;
int UniqueNumnber(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=arr[i]^ans;
    }
    return ans;
}
int main(){
    int arr[]={2,4,2,4,10,11,10,50,60,50,60};
    int n=11;
    int Answer= UniqueNumnber( arr, n);
    cout<<"Unique Number is:"<<Answer;
}
