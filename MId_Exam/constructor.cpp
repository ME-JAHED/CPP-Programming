#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    public:
    char name[100];
    int wheel;
    int seat;
    Vehicle(char n[],int w,int s)
    {
        strcpy(name,n);
        wheel=w;
        seat=s;
    }
};
int main()
{
    char name[100]="Honda";
    Vehicle car(name,4,5);
    cout<<car.name<<endl<<car.seat<<endl<<car.wheel<<endl;
    return 0;
}