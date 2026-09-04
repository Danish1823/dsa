#include <iostream>
using namespace std;

int main(){
    int teabags;

    cout <<"Enter the numbers of tea bags:";

    cin >> teabags;

    if (teabags < 10){
            teabags +=5;
    }
      cout << "Total Number of Teabags: " << teabags << endl;



      return 0;
}