#include <iostream>
using namespace std;
long long log_recursion(int N) {
    if(N==1) return 0;
    return 1+log_recursion(N/2);
}

int main()
{
  int N;
  cin>>N;
  cout<<log_recursion(N);
    return 0;
}
