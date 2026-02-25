#include <iostream>
using namespace std;

void PrintDigits(int N){
   if(N<10){
        cout<<N<<" ";
    return;
   }
    PrintDigits(N/10);
    cout<< N%10 <<" ";
}
int main()
{
   int T;
   cin>>T;
   while(T--){
    int N;
    cin>>N;
    PrintDigits(N);
    cout<<endl;
   }
    return 0;
}
