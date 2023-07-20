#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int N,q;
    float p,t,d;
    cin>>N;
    while(N--){
      t=0;
      cin>>q>>p;
      if(q>100){
        d=p*.20;
        p=p-d;
      } 
      
      cout<<fixed<<setprecision(1)<<p*q<<endl;
    }
    
    return 0;
  }
