
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x,i;
    vector<int> v;
    cout<<"Enter size";
    cin>>n;
    for(i=0;i<n;i++)
    {
    cout<<"Enter element "<<i+1<<endl;
    cin>>x;
    v.push_back(x);
    }
    for(auto it=v.begin();it != v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 1;
}