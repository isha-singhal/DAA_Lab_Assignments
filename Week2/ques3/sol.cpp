#include <bits/stdc++.h>
using namespace std;

int pair_count(int *arr, int n, int key)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        return -1;
    }
    return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,key;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
        cin>>key;
        int res=pair_count(arr, n, key);
        if(res!=-1){
            cout << res << '\n';
        }
        else{
            cout << "No pair found" << '\n';
        }

	}
}