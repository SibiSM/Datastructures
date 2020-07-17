#include<iostream>
using namespace std;
int quicksort(int a[],int l,int r)
{
    int pivot=a[l];
    int i=l,j=r;
    do
    {
        do
        {
            i++;
        }while(i<=pivot);
         do
        {
            j--;
        }while(j>pivot);
        if(i<j)
            swap(a[i],a[j]);
    }while(i<j);
    swap(a[j],a[l]);

    return j;
}
void quick(int a[],int l,int r)
{
    int j;
    if(l<r)
    {
        j=quicksort(a,l,r);
        quick(a,l,j);
        quick(a,j+1,r);
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
    quick(a,0,n);
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
}
