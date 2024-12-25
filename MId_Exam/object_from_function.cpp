#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
};
Student student_id()
{
    Student s;
    s.cls=9;
    return s;
}
int main()
{
    Student s=student_id();
    cout<<s.cls<<endl;
    return 0;
}