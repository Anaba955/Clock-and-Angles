#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int T,N,c;
    cin>>T;
    while(T--){
      cin>>N;
      c=0;
      while(N!=0){
        if(N%10==5) c++;
        N=N/10;
      }
      cout<<c<<endl;
    }
    
    return 0;
  }
