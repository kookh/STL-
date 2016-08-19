#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> arr[7];
bool check[7];

void bfs(int x)
{
	queue<int> q;
	check[x] = true;
	q.push(x);

	while (!q.empty())
	{
		int y = q.front();
		printf("%d ", y);
		q.pop();

		for (int i = 0; i < arr[y].size(); i++)
		{
			int z = arr[y][i];
			if (check[z] == false)
			{
				check[z] = true;
				q.push(z);
			}
		}
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

	//bfs(1);   //1 2 5 3 4 6
	bfs(4);
	printf("\n");

	return 0;
}
