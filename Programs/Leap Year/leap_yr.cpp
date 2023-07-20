#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int T, yr;
    cin>>T;
    while(T--){
      cin>>yr;
      if(yr % 4 == 0 & yr % 100 != 0 || yr % 400 == 0) cout<<"Yes"<<endl;
      else  cout<<"No"<<endl;
    }
    
    return 0;
  }
