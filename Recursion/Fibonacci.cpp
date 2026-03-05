#include <iostream>
using namespace std;

int countsteps(int N){
if(N==1) return 0;
if(N==2) return 1;

  if(N>2) return countsteps(N-1)+countsteps(N-2);
}
int main()
{
    int N;
    cin>>N;
    cout<<countsteps(N)<<endl;
    return 0;
}
