#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y)
{
    if(x>y)
        return true;
    return false;
}
void bubble(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(check(a[i],a[j]))
                swap(a[i],a[j]);
        }
    }
}
main()
{
    int n;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
