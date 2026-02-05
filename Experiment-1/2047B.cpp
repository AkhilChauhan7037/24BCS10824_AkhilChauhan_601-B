#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string rep(string s)
{
    vector<int>temp(27,0);
    int n=s.size(),min=INT_MAX,max=INT_MIN,indexmn=-1,indexmx=-1,c;
    for(int i=0;i<n;i++)
    {
        c=s[i]-96;
        temp[c]=temp[c]+1;
    }
    for(int i=1;i<=26;i++)
    {
        if(temp[i]==0)
        {
            continue;
        }
        if(temp[i]<min)
        {
            min=temp[i];
            indexmn=i;
        }
        if(temp[i]>max)
        {
            max=temp[i];
            indexmx=i;
        }
    }
    if(indexmn==indexmx||max==min)
    {
        for(int i=1;i<n;i++)
        {
          if(s[i-1]!=s[i])
          {
             s[i-1]=s[i];
             break;
          }  
        }
        return s;
    }
    char ch=indexmn+96;
    for(int i=0;i<n;i++)
    {
        if(s[i]==ch)
        {
            s[i]=indexmx+96;
            break;
        }
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans=rep(s);
        cout<<ans;
        cout<<endl;
    }
    return 0;
}