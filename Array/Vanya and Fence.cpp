#include <iostream>
using namespace std;

int main()
{
    int total_width=0;
  int n,h;
  cin>>n>>h;
    for(int i=0; i<n;i++) {
            int height;
            cin>>height;
    if(height>h) total_width+=2;
    else
        total_width+=1;

    }
    cout<<total_width;

    return 0;
    }
