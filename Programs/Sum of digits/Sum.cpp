#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int X,s=0;
    cin>>X;
    while(X!=0){
      s+=X%10;
      X=X/10;
    }
    cout<<s;
    
    return 0;
  }
