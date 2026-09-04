#include <iostream>
using namespace std;

void MaxSelect (int arr[], int n){
     for (int i=0;i<n;i++){
        int index=i;
        
        for (int j=i+1;j<n;j++){
            if (arr[index]<arr[j]){
                index=j;
            }   
        }
        swap(arr[index],arr[i]);
    }
      for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
}

 
int main (){
    int n=5;
    int arr [5]= {23,45,67,1,7};

    MaxSelect(arr, n);
    
        return 0;
}