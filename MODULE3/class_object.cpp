#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student s;
    s.roll=1;
    s.cls=9;
    s.section='A';
    char nm[100]="Rahim";
    strcpy(s.name,nm); 
    cout<<s.name;  
    return 0;
}