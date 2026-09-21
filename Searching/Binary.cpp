#include <iostream>
using namespace std;

int main() {

    int n = 6;
    int arr[] = {2, 3, 4, 5, 20, 40};

    int key = 5;

    int start = 0;
    int end = n - 1;

    bool found = false;

    while (start <= end) {
        

        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // Check after the loop
    if (found) {
        cout << "Element is found";
    }
    else {
        cout << "Element is not found";
    }

    return 0;
}