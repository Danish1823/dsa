#include <iostream>
using namespace std;


int main(){

    int n=5;

    int arr[]={10,23,45,76,89};

     int start=0, end = n-1, index=n, target=70;

     while(start <=  end){

          int mid = start + (end - start) / 2;

        if (arr[mid]==target){

            index=mid;
            // return index;
            break;
        }

           else if (arr[mid] < target) {
            start = mid + 1;
        }
            else{
                index=mid;
                end=mid-1;
            }
        }
        cout<<index;
}