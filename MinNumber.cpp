#include<iostream>
#include<limits.h>
using namespace std;
int MinNumber(int arr[3][4],int row,int col){
    int MinAns=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<MinAns){
                MinAns=arr[i][j];
            }
        }
    }
    return MinAns;
}
int main(){
    int arr[3][4]={
        {30,40,50,60},
        {300,400,500,600},
        {23,18,48,2}
    };
    int row =3;
    int col=4;
   cout<< "MiniumNUMber of array:"<<MinNumber(arr,row,col)<<endl;
}
