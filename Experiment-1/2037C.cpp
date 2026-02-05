#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> permutation(int value)
{
    vector<int>ans;
    if(value<5)
    {
        return {-1};
    }
    for(int i=1;i<=value;i++)
    {
        if(i==5)
        {
            continue;
        }
        if(i%2!=0)
        {
            ans.push_back(i);
        }
    }
    ans.push_back(5);
    for(int i=4;i<=value;i++)
    {
        if(i%2==0)
        {
            ans.push_back(i);
        }
        if(i==4)
        {
            ans.push_back(2);
        }
    }
    return ans;
}
int main()
{
    int n,x;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans=permutation(x);
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}