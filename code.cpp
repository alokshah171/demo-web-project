#include <iostream>
using namespace std;

int main(){
   int num[]={12,13,14,15,16};
   int size=5;
   int smallest= 100;
   for(i=0;i<size;i++){
      if( num[i]<smallest){
         smallest=num[i]
      }
   }
   cout<<"smallest"<<smallest;
}


