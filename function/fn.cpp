#include <iostream>
using namespace std;

// Function prototypes
int checkTemperature(int temperature);
void serveChai(int cups);

int main() {
    int temp = checkTemperature(50);

    cout << temp << endl;

    serveChai(3);

    return 0;
}

int checkTemperature(int temperature) {
    return temperature;
}

void serveChai(int cups) {
    cout << "Serving " << cups << " cups of chai" << endl;
}