#include <iostream>
using namespace std;
void SumOfNumber(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
       int sum=0;
        for(int j=0;j<col;j++){
         sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={
        {30,40,50,60},
        {6,9,8,7},
        {2,3,4,5,}
    };
    int row =3;
    int col=4;
    SumOfNumber(arr,row,col);
}