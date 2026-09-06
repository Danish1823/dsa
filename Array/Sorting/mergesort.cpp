#include <iostream>
using namespace std;

// Merge two sorted parts
void merge(int arr[], int start, int mid, int end) {

    int i = start;      // first part
    int j = mid + 1;   // second part
    int k = 0;

    int temp[end - start + 1];

    // Compare elements from both parts
    while (i <= mid && j <= end) {

        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from first part
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from second part
    while (j <= end) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temp back into original array
    for (int x = 0; x < k; x++) {
        arr[start + x] = temp[x];
    }
}


// Merge Sort function
void mergeSort(int arr[], int start, int end) {

    // Base condition
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // Sort left half
    mergeSort(arr, start, mid);

    // Sort right half
    mergeSort(arr, mid + 1, end);

    // Merge both sorted halves
    merge(arr, start, mid, end);
}


int main() {

    int arr[] = {38, 27, 43, 3, 9, 82, 10};

    int n = 7;

    cout << "Before sorting: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n - 1);

    cout << "\nAfter sorting: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}