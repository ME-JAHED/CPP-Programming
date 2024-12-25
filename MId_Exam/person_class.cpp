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
   char name[100]="Masud Rana";
   Person* masud=new Person(name,5.80,30);
   cout<<masud->name<<endl<<masud->height<<endl<<masud->age<<endl;
    return 0;
}