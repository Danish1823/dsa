#include <iostream>
using namespace std;
int main(){
  int n;
   cin>>n;
  int rev=0;
 // int sum=0;
    int dub=n;
      while(n>0){
          int lastdigit=n%10;
         // sum=sum+(lastdigit*lastdigit*lastdigit);
         rev=(rev*10)+lastdigit;
         n=n/10;
     }
       if(dub == rev) cout<<"true";
         else cout<<"false";
}