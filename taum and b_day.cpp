#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    while(n--)
    {
        long int b,w,bc,wc,k;
        cin>>b>>w>>bc>>wc>>k;
        long int BtoW=bc+k;
        long int WtoB=wc+k;
        bc=min(bc,WtoB);
        wc=min(wc,BtoW);
        cout<<(b*bc+w*wc)<<endl;

    }
    return 0;
}

