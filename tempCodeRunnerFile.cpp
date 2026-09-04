#include <iostream>
using namespace std;

int main(){
    int TeaCups;

    cout<<"Enter NUmber of Tea cups served:"<<endl;

    cin >> TeaCups;
    cout << "Number of tea cups served: " << TeaCups << endl;

    while(TeaCups > 0){
        cout << "Serving tea cup " << TeaCups << endl;
        TeaCups--;
    }
    return 0;

}