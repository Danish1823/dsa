#include <iostream>
using namespace std;


int main(){
    int n=6;
    int arr[]={2,3,4,5,20,40};
    int key=5;
    int start=0;
    int end=n-1;
    

    while(start<=end){
    int mid = start + (end-start) / 2;
        
      if (arr[mid]==key){
        cout<<"FOUND KEY ELEMENT";
        break;
      }
      else if(arr[mid]<key){
      start=mid+1;
      }
    
     else{
            end=mid-1;
      }
    }
    return 0;
}