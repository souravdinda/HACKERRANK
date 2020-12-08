#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],min=99999999;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                int r=abs(a[i]-a[j]);
                if(min>r)
                {
                    min=r;
                }
            }
        }
    }
    cout<<min;
}
 

