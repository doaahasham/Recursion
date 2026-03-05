#include <iostream>
using namespace std;

void MaxNumber(int N , long long A[] , long long sum){
    if(index==0) return ;

     sum+=A[N];

    MaxNumber(N-1 , A ,Max);
}
int main()
{
    int N;
    cin>>N;
    long long A[1000];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    MaxNumber(N,A,A[0]);

    return 0;
}
