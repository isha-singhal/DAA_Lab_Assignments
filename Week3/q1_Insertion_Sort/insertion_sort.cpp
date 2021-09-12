#include <bits/stdc++.h>
using namespace std;

int* insertion_sort(int *arr, int n)
{
    int i,j,t,comp=0,shifts=0;
    int* res = new int[2];
    for(i=1;i<n;i++)
    {
        t=arr[i];
        j=i-1;
        while(arr[j]>t && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
            comp++;
            shifts++;
        }
        arr[j+1]=t;
        shifts++;
    }
    res[0]=comp,res[1]=shifts;
    return res;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,comp,shifts;
		cin>>n;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
        int *res=insertion_sort(arr, n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        comp=res[0];
        shifts=res[1];
        cout << "Comparisons = " << comp << "\nShifts = " << shifts << endl;
        free(res);
        free(arr);
	}
}