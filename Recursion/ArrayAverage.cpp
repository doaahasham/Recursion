#include <iostream>
using namespace std;

long long ArrayAverage(int N ,long long A[]){
if(N==0) return 0;
 return A[N-1]+ArrayAverage(N-1,A);
}

int main()
{
    int N;
    cin>>N;
    long long A[N];
    for(int i=0;i<N;i++) cin>>A[i];

    double sum=ArrayAverage(N,A);
    double Avg= sum/N;


    return 0;
}
