#include <bits/stdc++.h>
using namespace std;

int get_min(vector<int> &key, vector<bool> &mst)
{
	int mini = INT_MAX, min_idx;
	for (int i = 0; i < key.size(); i++)
	{
		if (mst[i] == false and key[i] < mini)
		{
			mini = key[i];
			min_idx = i;
		}
	}
	return min_idx;
}

void Prims(vector<vector<int>> &g, int v)
{
	vector<int> key(v, INT_MAX);
	vector<bool> mst(v, false);
	vector<int> parent(v, -1);
	key[0] = 0;
	for (int i = 0; i < v - 1; i++)
	{
		int mini = get_min(key, mst);
		mst[mini] = true;
		for (int j = 0; j < v; j++)
		{
			if (g[mini][j] and mst[j] == false and g[mini][j] < key[j])
			{
				key[j] = g[mini][j];
				parent[j] = mini;
			}
		}
	}
	int res = 0;
	for (int i = 1; i < v; i++)
	{
		res += key[i];
	}
	cout << "Minimum Spanning Weight: "<< res;
}

int main()
{
	
	int v, e;
	cin >> v >> e;
	vector<vector<int>> g(v, vector<int>(v, 0));
	for (int i = 0; i < e; i++)
	{
		int x, y, wt;
		cin >> x >> y >> wt;
		g[x][y] = wt;
		g[y][x] = wt;
	}
	Prims(g, v);
	return 0;
}