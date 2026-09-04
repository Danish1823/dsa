#include <iostream>
using namespace std;

int main() {
    int cups;
    double Totalprice, totalpricePercup, discountedPrice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;

    cout << "Enter the price of tea per cup: ";
    cin >> totalpricePercup;

    Totalprice = cups * totalpricePercup;
    discountedPrice = Totalprice - (Totalprice * 0.05);

    cout << "Total price of tea is: " << Totalprice << endl;
    cout << "Total price of tea after 5% discount is: " << discountedPrice << endl;

    return 0;
}