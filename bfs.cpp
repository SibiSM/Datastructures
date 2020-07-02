#include<iostream>
#include<queue>
using namespace std;
void DFS(int G[7][7],int i,int n)
{
    static int visited[100]={0};
    if(visited[i]==0)
    {
        cout<<i<<" ";
        visited[i]=1;
        for(int j=1;j<n;j++)
        {
            if(G[i][j]==1 && visited[j]==0)
            {
                DFS(G,j,n);
            }
        }
    }
}
void BFS(int G[7][7],int start,int n)
{
    int visited[n]={0};
    int i,j,k;
    i=start;
    visited[i]=1;
    queue<int>q;
    cout<<i<<" ";
    q.push(i);
    while(!q.empty())
    {
       i=q.front();
       q.pop();
       for(j=1;j<n;j++)
       {
           if(G[i][j]==1 && visited[j]==0)
           {
               cout<<j<<" ";
               visited[j]=1;
               q.push(j);
           }
       }
    }

}
int main()
{
    int start;
    int G[7][7]={{0,0,0,0,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,0,0},
                {0,1,0,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0}};
    cout<<"Enter start vertex"<<endl;
    cin>>start;
    BFS(G,start,7);
    cout<<endl<<"DFS"<<endl;
    DFS(G,start,7);

}
