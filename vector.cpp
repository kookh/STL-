#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;    //<vector>
	v.push_back(11);
	v.push_back(11); 
	v.push_back(22);
	v.push_back(22); 
	v.push_back(33);


	cout <<"Current Data Count : "<< v.size() << endl;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	v.erase(remove(v.begin(), v.end(), 22), v.end());  //<algortihm>


	cout << "Current Data Count : " << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
