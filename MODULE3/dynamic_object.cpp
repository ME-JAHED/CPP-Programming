#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int c,int s,char n[])
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Rahim Khan";
    //with constructor
    Student* rahim=new Student(1,9,'A',name);
    //without constructor
    //Student* rahim=new Student;
    cout<<(*rahim).cls<<endl;
    //shortcut
    cout<<rahim->name<<endl;
    return 0;
}