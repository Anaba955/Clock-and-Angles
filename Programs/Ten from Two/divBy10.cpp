#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int T,n,c;
    cin>>T;
    while(T--){
      cin>>n;
      c=0;
      if(n%5!=0)  cout<<-1<<endl;
      else{
        while(n%10!=0){
          n=n*2;
          c++;
        }
        cout<<c<<endl;
      }
    }
    
    return 0;
  }
