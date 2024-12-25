#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string a="Ratul";
    stringstream ss(s);
    string word;
    int flag=1;
    while(ss>>word)
    {
        if(word==a)
        {
            flag=0;
        }
    }
    (flag!=1)?cout<<"YES":cout<<"NO";
    return 0;
}