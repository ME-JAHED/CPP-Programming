#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
       string s,x;
       cin>>s>>x;
      while(s.find(x)!=-1)
       {
         s.replace(s.find(x),x.size(),"$"); 
       }
       cout<<s<<endl;
    }
    return 0;
}