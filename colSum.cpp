#include<iostream>
using namespace std;
void rowSum(int arr[3][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
        sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={
  {30,50,60,70},
  {10,20,100,2},
  {0,1,2,3,}
    };
    int row=3;   
   int col=4;
   rowSum(arr,row,col);
    
}
