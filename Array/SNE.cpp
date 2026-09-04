#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of An Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element in Array:";
    
    for (int i=0; i<n; i++){
    cin>>arr[i];
    }

    int ans = 0;
    for (int i=0; i<n; i++){
      ans = ans+arr[i];
    }
    cout<<"Sum of Array Element is :"<<ans <<endl;
    return 0;
}