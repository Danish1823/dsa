#include <iostream>
using namespace std;
void PrintArray(int arr[3][4],int row,int col){
    for (int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
  int main(){
       int arr[3][4]={
        {20,30,40,50},
        {2,3,4,5},
        {100,200,300,400}
      };
       int row=3;
       int col=4;
       cout<<PrintArray(arr,row,col)<<endl;
    }
