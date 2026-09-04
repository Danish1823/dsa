#include <iostream>
#include <string>
using namespace std;

int main() {
    string response;

    do {
        cout << "Do you want more tea? (yes/no): ";
        cin >> response;
    } while (response == "no");

    cout << "Thank you for your response." << endl;

    return 0;
}