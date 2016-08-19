#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, int> ma;

	
	ma.insert(pair<int, int>(20120003, 42));
	ma.insert(pair<int, int>(20170049, 27));
	ma.insert(pair<int, int>(20130012, 33));
	
	map<int, int>::iterator it;
	for (it = ma.begin(); it != ma.end(); it++)
		cout << it->first << " " <<it->second<<endl;
	
	cout << ma[20120003] << endl;

	return 0;
}
