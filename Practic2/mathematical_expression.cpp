#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    long long int sum=a+b;
    long long int mnu=a-b;
    long long int mul=a*b; 
    if(s=='+')
    {
        if(c==sum)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
   if(s=='-')
    {
        if(c==mnu)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<mnu<<endl;
        }
    }
    else if(s=='*')
    {
        if(c==mul)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<mul<<endl;
        }
    }
    return 0;
}