#include <iostream>
using namespace std;

bool palindrome(long long A[], int l, int r)
{
    if(l >= r) return true;

    if(A[l] != A[r]) return false;

    return palindrome(A, l+1, r-1);
}

int main()
{
    int N;
    cin >> N;

    long long A[N];

    for(int i=0;i<N;i++)
        cin >> A[i];

    if(palindrome(A,0,N-1))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
