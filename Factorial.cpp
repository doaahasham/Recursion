#include <iostream>
using namespace std;

void MaxNumber(long long N , long long sum){
    if(N==0 || N==1)
    {
        cout<<sum;
        return ;
    }
    Factorial(N-1 , sum*N);
}
int main()
{
    long long N;
    cin>>N;
    Factorial(N,1);

    return 0;
}
