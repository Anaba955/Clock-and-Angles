#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int X, Y, Z;
    cin>>X>>Y>>Z;
    if((X>Y && X<Z)||(X>Z && X<Y))  cout<<X<<endl;
    else if((Y>Z && Y<X)||(Y>X && Y<Z))   cout<<Y<<endl;
    else  cout<<Z<<endl;
    
    return 0;
  }
