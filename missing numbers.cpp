#include <bits/stdc++.h>

using namespace std;

int main(){
    int *arr,*brr;
    int m,n;
    cin >> m;
    arr = new int[m];
    for(int i = 0 ; i < m ; i++)
        cin >> arr[i];
    sort(arr,arr+m);
    cin >> n;
    brr = new int[n];
    for(int i = 0 ; i < n ; i++)
        cin >> brr[i];
    sort(brr,brr+n);

    int i=0,j=0;
    while(j != n){
        if(i==m){
            while(j!=n){
                cout << brr[j] << " ";
                j++;
            }
        }
        
        else if(arr[i]==brr[j]){
            i++;
            j++;
        }
        else if(arr[i]!=brr[j]){
            cout << brr[j] << " ";
            j++;
        }
    }
}
    
   

   

