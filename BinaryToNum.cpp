#include <iostream>
#include<cmath>
using namespace std;
int main() {
   int bi , rem , di;
   cout<<"Enter the Binary No:";
   cin>>bi;
   for(int i=0; bi > 0; i++){
       rem=bi%10;
       di+=rem*pow(2 , i);
       bi/=10;
   }
   cout<<"The No in Decimal is :"<<di;
    return 0;
}
