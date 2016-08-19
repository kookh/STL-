#include<iostream>
#include<algorithm>
#include<vector>
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

	sort(v.begin(), v.end());
	
	do
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	} while (next_permutation(v.begin(), v.end()));
	

	return 0;
}
