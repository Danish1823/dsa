#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={30,20,34,56,105,78,90};
    int ans = INT_MIN;
    for (int i=0; i<=6; i++){
        if (arr[i] > ans){    
            ans = arr[i];
        }
    }
    cout<<"Maximum element is:"<< ans <<endl;
    return 0;
}