#include <bits/stdc++.h>
using namespace std;

void find_sequence(int *arr, int n)
{
    int i,j,k;
    bool flag=false;
    for(i=1;i<=n;i++)
    {
        if(flag) break;
        for(j=i+1;j<=n;j++)
        {
            if(flag) break;
            for(k=1;k<=n;k++)
            {
                if((arr[i]+arr[j])==arr[k])
                {
                    cout<<i<<" ,"<<j<<" ,"<<k<<"\n";
                    flag=true;
                    break;
                }
                if((arr[i]+arr[j])<arr[k])
                {
                    break;
                }
            }
        }
    }
    if(flag==false)
    {
        cout << "No sequence found." << '\n';
    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
        find_sequence(arr, n);
    }
}