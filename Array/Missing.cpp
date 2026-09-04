#include <iostream>
using namespace std;


int MissingNumber (int arr[] , int n){

    
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum = sum + arr[i];
    }

    int ans = n * (n + 1) / 2 - sum;

    return ans;

}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 5};
    int result = MissingNumber(arr,n);

    cout << result << endl;

    return 0;
}