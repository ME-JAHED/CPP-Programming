#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a="Hello";
   string b="World";
   a=a+b;
   a.push_back('o');
   //to delet last char in a string
   a.pop_back();
   cout<<a<<endl;

   string n;
   cin>>n;
   //to erase
   n.erase(3,1);
   cout<<n<<endl;
   //replease
   n.replace(3,2,"so"); 
    return 0;
}