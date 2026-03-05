#include <iostream>
using namespace std;

void BinaryNumber(long long N){
   if(N==0){
    return;
   }
    BinaryNumber(N/2);
    cout<< N%2 ;
}
int main()
{
   int T;
   cin>>T;
   while(T--){
    long long N;
    cin>>N;
    BinaryNumber(N);
    cout<<endl;
   }
    return 0;
}
