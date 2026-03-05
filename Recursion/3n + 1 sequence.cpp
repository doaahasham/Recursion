#include <iostream>
using namespace std;

int printlengthofsequance(long long N ){
    if(N==1) return 1;
if(N%2==0) return 1+ printlengthofsequance(N/2);
 else
    return 1+ printlengthofsequance(3*N+1);
}
int main()
{
    long long N;
    cin>>N;
   cout<< printlengthofsequance(N);
    return 0;
}
