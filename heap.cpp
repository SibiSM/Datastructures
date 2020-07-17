#include<iostream>
using namespace std;
void create(int a[],int n)
{
    int i,temp;
    i=n;
    temp=a[i];
    while(i>1 && temp<a[i/2])
    {
       a[i]=a[i/2];
       i=i/2;
    }
    a[i]=temp;
}
void minheap(int a[],int n)
{
    int i,j,x,val;
    x=a[n];
    val=a[1];
    a[1]=a[n];
    a[n]=val;
    i=1;j=2*i;
    while(j<n-1)
    {
        if(a[j+1]<a[j])
            j++;
        if(a[i]>a[j])
            {
            swap(a[i],a[j]);
            i=j;
            j=2*j;
            }
        else
            break;
    }
}
 main()
{
    int n;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
        create(a,i);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    for(int i=n;i>=1;i--)
        minheap(a,i);
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
