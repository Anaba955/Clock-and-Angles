// Clock and Angles
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   
   int h,m,a,t;
   cin>>t;
   while(t--){
    cin>>h>>m;
    a = abs(h*30-5.5*m);
    if(m==00)
        a = 360 - a;
    cout<<a<<endl;
   }
  return 0;
}
