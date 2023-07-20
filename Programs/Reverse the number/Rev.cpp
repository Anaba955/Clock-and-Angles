#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int X,rev=0;
    cin>>X;
    while(X!=0){
      rev=rev*10+X%10;
      X=X/10;
    }
    cout<<rev;
    
    return 0;
  }
