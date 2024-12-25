#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   //for 1ton 
   sort(a,a+n);
   //for n to 1
   sort(a,a+n,greater<int>{});
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   } 
    return 0;
}