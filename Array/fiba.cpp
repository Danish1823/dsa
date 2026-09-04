#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter A Number :" << endl;
    cin >> n;

    int arr[100];

    arr[0] = 0;
    arr[1] = 1;
  int sum = arr[0]+arr[1];
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
      sum = sum + arr[i];
}
     cout << sum << " ";

    return 0;
}