#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string nm,int ag)
    {
        name=nm;
        age=ag;
    }
    void hello()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    Person jahed("Jahedul Islam",23);
    jahed.hello();
    return 0;
}