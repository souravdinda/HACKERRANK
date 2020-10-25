#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[n],c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]=-1;
                a[i]=-1;
                break;
            }
        }
    }
    if(c==n)
    {
        cout<<c-1;
    }
    else
    {
        cout<<c+1;
    }
}

