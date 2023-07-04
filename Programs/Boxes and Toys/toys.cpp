#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int N,ti,ci,i,c=0;
    cin>>N;
    while(N--){
      cin>>ti>>ci;
      if(ci-ti>=2)  c++;
    }
    cout<<c;
    
    return 0;
  }
