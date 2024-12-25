#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    Person jahed("Jahed islam",20);
    cout<<jahed.name<<" "<<jahed.age<<endl;
    return 0;
}