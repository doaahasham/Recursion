#include <iostream>
using namespace std;

void MaxNumber(int N , long long A[] , int index , long long Max){
    if(index==N)
    {
        cout<<Max;
        return ;
    }

     if(A[index] > Max) Max = A[index];

    MaxNumber(N , A , index+1 , Max);
}
int main()
{
    int N;
    cin>>N;
    long long A[1000];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    MaxNumber(N,A,0,A[0]);

    return 0;
}
