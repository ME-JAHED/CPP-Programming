#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespace"<<endl;
    }
}
using namespace rakib;
int main()
{
    cout<<age<<endl;
    return 0;
}