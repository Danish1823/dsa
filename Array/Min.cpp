#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {30, 40, 56, 8, 20};

    int ans = INT_MAX;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < ans) {
            ans = arr[i];
        }
    }

    cout << "Minimum element is: " << ans << endl;

    return 0;
}