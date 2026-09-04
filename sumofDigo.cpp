# include<iostream>
using namespace std;
void SumDigo(int arr[3][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
      //int sum=0;
      //for(int j=0;j<row;i++){
            sum=sum+arr[i][i];
            cout<<sum<<endl;
       }
      //out<<sum<<endl;
    }
//}
int main(){
    int arr[][3]={
        {20,30,40},
        {2,3,4},
       {100,200,300}
    };
   int row=3;
    int col=3;
    SumDigo(arr,row,col);
}