#include<bits/stdc++.h>

using namespace std;

int min_distance(int distance[], bool visited[], int n)
{
    int min = INT_MAX, min_index;
    for(int i=0;i<n;++i)
    {
        if(visited[i]==false && distance[i]<=min)
        {
            min = distance[i];
            min_index = i;
        }
    }
    return min_index;
}

int main()
{
    int t,z;
    cin>>t;
    for(z=0;z<t;++z)
    {
        int n,m,src,dst,cost,i,j,k,root,current;
        cin>>n>>m;
        int mat[n][n]={},distance[n];
        vector <vector<int>> v1(n);
        bool visited[n];
        for(i=0;i<n;++i)
        {
            distance[i] = INT_MAX;
            visited[i] = false;
        }
    
        for(i=0;i<m;++i)
        {
            cin>>src>>dst>>cost;
            if(mat[src-1][dst-1]==0)
            {
                mat[src-1][dst-1] = cost;
                mat[dst-1][src-1] = cost;
                v1[src-1].push_back(dst-1);
                v1[dst-1].push_back(src-1);
            }
            else
            {
                mat[src-1][dst-1] = min(mat[src-1][dst-1],cost);
                mat[dst-1][src-1] = min(mat[dst-1][src-1],cost);
            }
        }
        cin>>root;
        distance[root-1]=0;
        for(i=0;i<n-1;++i)
        {
            j = min_distance(distance,visited,n);
            visited[j] = true;
            for(k=0;k<n;++k)
            {
                if(!visited[k] && mat[j][k] && distance[j]!=INT_MAX && distance[j] + mat[j][k] < distance[k])
                {
                    distance[k] = distance[j] + mat[j][k];
                }
            }
        }
        for(i=0;i<n;++i)
        {
            if(i==root-1)
            {
                continue;
            }
            if(distance[i]==INT_MAX)
            {
                cout<<-1<<" ";
            }
            else
            {
                cout<<distance[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

