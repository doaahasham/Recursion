#include <iostream>
using namespace std;

void Summation(int N , long long A[] , int index , long long sum){
    if(index==N)
    {
        cout<<sum;
        return ;
    }
    sum+=A[index];
    Summation(N , A , index+1 , sum);
}
int main()
{
    int N;
    cin>>N;
    long long A[1000];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    Summation(N,A,0,0);

    return 0;
}
