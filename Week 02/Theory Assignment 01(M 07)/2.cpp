#include <bits/stdc++.h>

using namespace std;

int Power(int n,int m)
{
  if(m==0)
  {
    return 1;
  }
  return n*Power(n,m-1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<Power(n,m)<<"\n"; 
    return 0;
}

