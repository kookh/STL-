#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr[7];
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


	return 0;
}
