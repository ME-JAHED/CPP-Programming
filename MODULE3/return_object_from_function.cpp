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
Student fun()
{
    char name[100]="Rahim Khan";
    Student rahim(1,7,'A',name);
    return rahim;
}
int main()
{
   Student rahim=fun();
   cout<<rahim.roll<<endl;
    return 0;
}