#include <iostream>
using namespace std;
bool FindTarget(int arr[3][4],int row,int col,int target){
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==target){
            return true;
        }
    }
 }
 return false;
}
int main(){
    int arr[3][4]={
        {20,30,40,50},
        {100,200,300,400},
        {2,3,4,5}
    };
    int row=3;
    int col=4;
    int target=30;
  cout<<"TArget Found or Not:"<< FindTarget(arr, row, col, target)<<endl;
}
