#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    char t[100];
    int i,j,k,len,count=0,len1,w,append;
    cin>>s;                //1st string
    cin>>t;             //2nd string
    cin>>k;                // no of operation we can do maximum
    len=strlen(s);         // length of 1st string
    for(i=0;i<len;i++)
    {
        if(s[i]!=t[i])
        {
            break;
        }
        count++;    // count how many character is matched from 0 index
    }
    len1=strlen(t); //length of second string
    //how many delete
        int del=len-count;
    //how many append
        if(del==0)
        {
             append=0;        // if two string is same.....
        }
        else
        {
            append=len1-count;
        }
    //compare with k
        if((del+append)<=k)
        {
            cout<<"Yes";
        }
        else
            cout<<"No";
}

