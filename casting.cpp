#include <iostream>
using namespace std;

int main() {
    double teaprice = 45.99;
    int roundPrice = static_cast<int>(teaprice);

    cout << roundPrice << endl;
    return 0;
}