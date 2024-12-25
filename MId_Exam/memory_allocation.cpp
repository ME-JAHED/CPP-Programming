#include<bits/stdc++.h>
using namespace std;
class Bike
{
    public:
    int wheel;
    int lenth;

    Bike(int w,int l)
    {
        wheel=w;
        lenth=l;
    }
};
int main()
{
    Bike* honda=new Bike(2,7);
    cout<<honda->wheel<<endl;
    Bike* yemaha=new Bike(3,6);
    cout<<yemaha->lenth<<endl;
    delete honda;
    cout<<honda->wheel<<endl;
    return 0;
}