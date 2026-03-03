#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int ,string> student;
    student[101]="Riddhi";
    student[102]="Mouthwika";
    student[103]="Carry";
    student[104]="Skylar";
    for(auto it=student.begin();it!=student.end;it++)
    {
        cout<<it->first<<" Name :"<<it->second<<endl;
    }
    return 0;
}