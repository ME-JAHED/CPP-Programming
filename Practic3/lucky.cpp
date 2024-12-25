#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int test=0;test<t;test++)
   {
    string s;
    cin>>s;
    int sum1=s[0]+s[1]+s[2];
    int sum2=s[3]+s[4]+s[5];
    (sum1==sum2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
   } 
    return 0;
}