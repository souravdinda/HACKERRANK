
#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int count=0;
    while(1){
        count=0;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                s.erase(i,1);
                s.erase(i-1,1);
                count++;
            }
        }
        if(count==0)break;
    }
    if(s.length()>0){
        cout<<s;
    }else{
        cout<<"Empty String";
    }
    return 0;
}

