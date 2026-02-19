#include<iostream>
#include<list>
using namespace std;
int main()
{
   list<string> l;
   l.push_back("C++");
   l.push_back("Java");
   l.push_back("Python");
   cout<<"Intial list"<<endl;
   for(auto it=l.begin();it != l.end();it++)
   {
    cout<<*it<<" ";
   }
   cout<<endl;
   l.push_front("DS");
   l.pop_back();
   cout<<"After changes\n";
   for(list<string>::iterator it=l.begin();it != l.end();it++)
   {
    cout<<*it<<" ";
   }
    return 0;
}