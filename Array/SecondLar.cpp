#include <bits/stdc++.h>
using namespace std;


  void SecondLargest(int arr[]){
      int ans = INT_MIN;
      int SecondAns = INT_MIN;
     for(int i=0; i<=7; i++){
          if (ans < arr[i]){
            SecondAns = ans;
            ans = arr[i];
           }else if(arr[i]>SecondAns && arr[i]!=ans) {
                SecondAns = arr[i];
           }
 
        }
         cout << "Largest Number is  :" << ans <<endl;
      cout<<"Second Largest Number is :"  <<SecondAns <<endl;


    } 
   int main(){
    int arr []={30,40,20,34,56,7,2,5};

      SecondLargest(arr);
  
      return 0;
}
