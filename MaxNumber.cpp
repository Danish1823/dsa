#include <iostream>
#include<limits.h>
using namespace std;
int MaxNumber(int arr[3][4],int row,int col){
int maxAns=INT_MIN;
for(int  i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]>maxAns){
            maxAns=arr[i][j];
        }
    }
}
 return maxAns;
}
int main (){
    int arr[3][4]={
        {20,30,40,6},
        {3,5,7,33},
        {200,400,50,8}
    };
       int row=3;
        int col=4;
    cout<<"Printing the Max.. Number:"<<MaxNumber(arr,row,col)<<endl;
}

