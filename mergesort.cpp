#include<iostream>
using namespace std;
void mergesort(int a[],int l,int mid,int r)
{
    int i=l,j=mid+1,k=l;
    int b[r+1];
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
        {
        b[k++]=a[i++];
        }
    while(j<=r)
       {
        b[k++]=a[j++];
       }
    i=l;
    while(i<=r)
    {
        a[i]=b[i];
        i++;
    }
}
void merge(int a[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        merge(a,l,mid);
        merge(a,mid+1,r);
        mergesort(a,l,mid,r);
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
    merge(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
