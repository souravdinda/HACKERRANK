#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
        {
        int r;
        int flag=0;
        cin>>r;
        vector<string>a(r);
        for(int i=0;i<r;i++)
        {
        cin>>a[i];
        sort(a[i].begin(),a[i].end());
        }
        
        for(int i=0;i<r-1;i++)
            for(int j=0;j<r;j++)
                if(a[i][j]>a[i+1][j])
                flag=1;
        flag?cout<<"NO"<<endl:cout<<"YES"<<endl;
        }   
    return 0;
}

