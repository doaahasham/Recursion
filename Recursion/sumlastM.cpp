#include <iostream>
using namespace std;

void SumLastM(int N , long long A[] , int index , long long sum){
    if(index==N)
    {
        cout<<sum;
        return ;
    }
    sum+=A[index];
    SumLastM(N , A , index+1 , sum);
}
int main()
{
    int N , M;
    cin>>N>>M;
    long long A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int start = N - M;
    SumLastM(N,A,start,0);

    return 0;
}
