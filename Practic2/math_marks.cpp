#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
};
int main()
{
    Student rahim;
    char nm[100]="Rahim Khan";
    strcpy(rahim.name,nm);
    rahim.roll=4;
    rahim.section='A';
    rahim.math_marks=95;
    rahim.cls=9;    
    Student karim;
    char nm1[100]="Karim Kill";
    strcpy(karim.name,nm1);
    karim.roll=4;
    karim.section='A';
    karim.math_marks=80;
    karim.cls=9;
    Student mina;
    char nm2[100]="Mina Tina";
    strcpy(mina.name,nm2);
    mina.roll=4;
    mina.section='A';
    mina.math_marks=90;
    mina.cls=9;
    if(karim.math_marks>rahim.math_marks&&karim.math_marks>mina.math_marks)
    {
        cout<<karim.name<<endl;
    }
    else if(mina.math_marks>karim.math_marks&&mina.math_marks>rahim.math_marks)
    {
        cout<<mina.name<<endl;
    }
    else
    {
        cout<<rahim.name<<endl;
    }
    return 0;
}