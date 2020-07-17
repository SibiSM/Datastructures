#include<iostream>
using namespace std;
int findMax(int a[],int n)
{
int max=INT_MIN;
int i;
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}
void countsort(int a[],int n)
{
    int k=0;
    int r=findMax(a,n);
    int *c=new int[r+1];
    for(int i=0;i<r+1;i++)
        c[i]=0;
    for(int i=0;i<n;i++)
        c[a[i]]++;
    int i=0;
    while(k<=r)
    {
        if(c[k]>0)
            {
            a[i++]=k;
            c[k]--;
            }
        else
            k++;

    }
}
main()
{
int n;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;
    countsort(a,n);
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
}
