#include <iostream>
#include<string>
using namespace std;


int main(){
    string userTea;
    int teaQuality;


    cout <<"What would you like to order in tea ? \n";
    getline(cin, userTea);
    cout<< "How many  cups of :" << userTea  <<" would you like to have ? \n";

      cin >> teaQuality;

      cout << teaQuality;
      cout << userTea ;
    return 0;
}