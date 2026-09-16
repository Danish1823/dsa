#include <iostream>
using namespace std;

int main() {

    int n = 6;
    int arr[] = {38, 30, 20, 5, 4, 2};

    int start = 0;
    int end = n - 1;
    int key = 38;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            cout << "Element is present";
            return 0;
        }
        else if (arr[mid] > key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element is not present";

    return 0;
}