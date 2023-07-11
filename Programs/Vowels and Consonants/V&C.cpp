#include <bits/stdc++.h>
#include<string.h>
  using namespace std;
  int main()
  {
    string str;
    int T,v,c,i;
    cin>>T;
    while(T--){
      v=0,c=0;
      cin>>str;
      for(i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='i'||str[i]=='I'||str[i]=='o'||
        str[i]=='O'||str[i]=='u'||str[i]=='U'){
          v++; 
        }
        else  c++;
      }
      cout<<v<<" "<<c<<endl;
    }
    
    
    
    return 0;
  }
