#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i+1;
    }
    return -1;
}

int main()
{
    int arr[100], x, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cin >> x;
        int res= linear_search(arr, n, x);
        if (res==-1){
            cout<<"Not Present "<<n<<endl;
        }
        else{
            cout<<"Present "<<res<<endl;
        }
    }
    return 0;
}
