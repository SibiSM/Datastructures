#include<iostream>
using namespace std;
void prims(int G[][7],int src,int n)
{
    int minimum,visited[n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(G[i][j]==0)
                G[i][j]=100;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<G[i][j]<<" ";
        }
    }
    cout<<endl;
    int des,i,j;
    visited[src]=1;
    int total=0;
    int e=0;
    while(e<n-1)
    {
        minimum=100;
        for( i=0;i<n;i++)
        {
            if(visited[i]==1)
            {
                for( j=0;j<n;j++)
                {
                    if(visited[j]==0)
                        {
                        if(minimum>G[i][j])
                        {
                       minimum=G[i][j];
                       src=i;
                       des=j;
                       cout<<"source="<<src+1<<"des= "<<des+1<<" cost"<<minimum<<endl;
                        }
                        }
                }
            }
        }
        cout<<endl;
        visited[des]=1;
        e++;
        total=total+minimum;
    }
    cout<<total<<endl;

}
int main()
{
    int start;
    int G[7][7]={{0,25,0,0,0,5,0},
                {25,0,9,0,0,0,6},
                {0,9,0,10,0,0,0},
                {0,0,10,0,12,0,11},
                {0,0,0,12,0,18,16},
                {5,0,0,0,18,0,0},
                {0,6,0,11,16,0,0}};
    cout<<"Source vertex "<<endl;
    cin>>start;
    prims(G,start-1,7);
}
