#include <bits/stdc++.h>

using namespace std;

int main() {
int T;
cin >> T;
for (int t=0 ; t<T ; t++){
    int N,M,S;
    cin >> N >> M >> S;

    int count;

    count=(M+S-1)%N;

    if(count==0)
        cout << N << endl;
    else
        cout << count << endl;  
}
return 0;
}

