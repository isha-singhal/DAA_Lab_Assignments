#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k++]=L[i++];
        }
        else
        {
            arr[k++]=R[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int n,t,i,j,k,l,r,check;
    cin>>t;
    while(t--)
    {
        check=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergesort(arr,0,n-1);
        cin>>k;
        l=0;
        r=n-1;
        while(l<=r)
        {
            if(arr[l]+arr[r]==k)
            {
                if(check!=0){cout<<",";}
                cout<<arr[l]<<" "<<arr[r];
                check=1;
                l++;
            }
            else if(arr[l]+arr[r]<k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if(check==0)
        {
            cout<<"No such pair exists";
        }
        cout<<endl;
    }
    return 0;
}