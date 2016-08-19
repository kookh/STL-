#include<cstdio>
#include<vector>
using namespace std;

vector<int> arr[1000];
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < b; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	for (int i = 1; i <= a; i++)
	{
		printf("%d\n", arr[i].size());
	}

	return 0;
}
