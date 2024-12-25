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
    Student rahim(1,9,'A',"Rahim Khan");
    cout<<rahim.roll<<endl;
    cout<<rahim.name<<endl;
    return 0;
}