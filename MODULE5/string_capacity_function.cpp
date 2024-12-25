#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="Hello";
   cout<<s.size()<<endl;
   cout<<s.max_size()<<endl;
   string a="Jahed";
   //to clear string
   s.clear();
    cout<<a<<endl;
    //for true fulse
    string b;
    if(s.empty()==true) cout<<"empty";
    else cout<<"no";
    //for resize
    s.resize(5);
    return 0;
}