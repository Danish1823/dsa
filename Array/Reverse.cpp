#include <bits/stdc++.h>
using namespace std;

 void Reverse(int arr[]){
     int i=0, j=4;
    while(i<j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }

}

 int main(){
    int arr [5] ={20,45,67,23,48};
      Reverse(arr);
     cout<<"Reversed Array is :";

    for(int k=0; k<5; k++){
    cout<< " " <<arr[k];

    }

    cout<<endl;
    return 0;

}