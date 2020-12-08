#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    int i,count=0,d;
    cin>>s1>>s2;
    int a1[26]={0};
    int a2[26]={0};
    for(i=0;i<s1.length();i++)
    {
        a1[s1[i]-'a']++;


    }
    for(i=0;i<s2.length();i++)
    {
        a2[s2[i]-'a']++;
    }

    for(i=0;i<26;i++)
    {
        if(a1[i]!=a2[i])
        {   d=a1[i]-a2[i];
           if(d<0)
           d=-d;
            count=count+d;
        }
    }
    cout<<count;
}

