#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int  main(){
    
    ll t;
    cin>>t;
     while(t--){
         ll n,k;
         cin>>n>>k;
         ll a[n],b[n];
         for(int i=0;i<n;i++)
         cin>>a[i];
         for(int i=0;i<n;i++)
         cin>>b[i];

         sort(a,a+n);

         for(int i=0;i<n;i++){
             if(a[i]>=k)
             continue;
             else
             {
                 for(int j=i;j<n;j++){
                     if(a[i]+b[j]>=k)
                     swap(b[i],b[j]);
                 }
             }

         }

         int f=1;

         for(int i=0;i<n;i++){
             if(a[i]+b[i]>=k)
             continue;
             else
             {
                 f=0;
                 break;
             }
         }

         if(f)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
    
    
     return 0;
 }

