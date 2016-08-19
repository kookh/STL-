#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main()
{
	vector<int> v;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	//sort(v.begin(), v.end());
	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < 5; i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
