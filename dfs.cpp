#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr[7];
bool check[7];

void dfs(int x)
{
	check[x] = true;
	printf("%d ", x);

	for (int i = 0; i < arr[x].size(); i++)
	{
		int y = arr[x][i];
		if (check[y] == false)
			dfs(y);
	}
}

int main()
{
	for (int i = 0; i < 7; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	for (int i = 1; i <= 6; i++)
	{
		sort(arr[i].begin(), arr[i].end());
		printf("%d : ", i);
		for (int j = 0; j < arr[i].size(); j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	//dfs(1);  //start : 1
	dfs(4);
	printf("\n");

	return 0;
}
