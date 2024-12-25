#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;
    Person(char* n,float h,int a)
    {
        strcpy(name,n);
        height=h;
        age=a;
    }
};
int main()
{
    int a,b;cin>>a>>b;
   char name[100]="Masud Rana";
   Person* masud=new Person(name,5.80,a);
   char name1[100]="Karim Ali";
   Person* karim=new Person(name1,5.70,b);
   if(a>b)
   {
    cout<<masud->name<<endl;
   }
   else 
   {
    cout<<karim->name<<endl;
   }
    return 0;
}