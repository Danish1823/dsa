#include <iostream>
using namespace std;

    int FindElement(int arr[],int key){
        for(int i=0; i<7; i++){
          if (arr[i]==key){
          return i;
        }
    }
    return -1;

    }
   int main(){

    int arr[7]={30,4,56,78,23,12,50};
    int key = 23;
      int index=-1;
      int result= FindElement( arr , key);

    

    cout<<"Index of key Element is : "<<result;
    return 0;
    
 }