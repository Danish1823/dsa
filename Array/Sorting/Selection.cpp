#include <iostream>
using namespace std;
 
void SelectionSort(int arr[],int n){
     for (int i=0;i<n;i++){
    
    int index=i;

    for(int j=i+1;j<n;j++){
        if (arr[j] < arr[index]){
            index=j;
        }
    }
      swap(arr[index] , arr[i]);
   }

     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main(){
    int n=7;
    int arr [7] = {20,3,5,1,4,60,56};
   
    SelectionSort(arr, n);
    return 0;
    
}