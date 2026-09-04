#include <iostream>
using namespace std ;

void InsertionSort(int arr[],int n){
     
    for(int i=0;i<n;i++){
    
     cin>>arr[i];
    
        for (int j=i; j>0;j--){
           if (arr[j] > arr[j-1]){
            swap(arr[j] , arr[j-1]);
          }else{
            break;
          }
        }
    }
    
       cout<<"The Sorted Array is :";
      for  (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}

 int main(){
    int arr[1000];
    int n;
    cout<<"Enter Size of An Aray:";
    cin>>n;
     cout <<"Enter Elements of  An Array:";
    
    InsertionSort(arr, n);
    return 0;
}