#include <bits/stdc++.h>
using namespace std;

int comparing(int c)
{
    int r = c*(c+1)/2;
    return r;
}

int* selection_sort(int *arr, int n)
{
    int c=n-1;
    int i,j,min,comp=0,swaps=0;
    int* res = new int[2];
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
                comp=comparing(c);
            }
        }
        swap(arr[min],arr[i]);
        swaps++;
    }
    res[0]=comp,res[1]=swaps;
    return res;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,comp,swaps;
		cin>>n;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
        int *res=selection_sort(arr, n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        comp=res[0];
        swaps=res[1];
        cout << "Comparisons = " << comp << "\nSwaps = " << swaps << endl;
        free(res);
        free(arr);
	}
}