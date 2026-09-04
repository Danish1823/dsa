#include <iostream>
using namespace std;
void NegativeNumber(int arr[],int n){
    int j=0;
    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
                j++;
        }
    }
}
int main(){
    int arr[]={2,-3,4,-6,10,-11};
    int n=6;
    NegativeNumber(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
