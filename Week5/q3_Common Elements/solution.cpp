#include<iostream>
using namespace std;

void duplicates(int* arr1,int m,int* arr2,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }

    }
}

int main()
{
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    duplicates(arr1,m,arr2,n);
    return 0;
}