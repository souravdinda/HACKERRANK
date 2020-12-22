#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, flag = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        int z = n;
        while(z % 3 != 0){
            z -= 5;
            if(z < 0){
                cout << "-1" << endl;
                flag++;
                break;
            }
        }
        if(flag == 1){
            flag = 0;
        }else{
            cout << string( z, '5') << string( n-z, '3') << endl;
        }
    }
    return 0;
}

