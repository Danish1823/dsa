#include <iostream>
using namespace std;

int main(){
    int TeaCups;

    cout<<"Enter Number of Tea cups served:"<<endl;

    cin >> TeaCups;
    cout << "Number of tea cups served: " << TeaCups << endl;

    while(TeaCups > 0){
        cout << "Serving tea cup \n" << TeaCups  << " reamining"
        << endl;
        TeaCups--;
      
      
    }
      cout<<"All tea cups served"<<endl;
    return 0;

}