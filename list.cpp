#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lt;
	lt.push_back(11);
	lt.push_back(11);
	lt.push_back(22);
	lt.push_back(22);
	lt.push_back(33);

	cout <<"Current Data Count : "<< lt.size() << endl;
	
	list<int>::iterator it;
	for (it = lt.begin(); it != lt.end(); it++)
		cout << *it << " ";
	cout << endl;


	//v.erase(remove(v.begin(), v.end(), 22), v.end());  //<algortihm>
	lt.remove(22); 
	
	cout << "Current Data Count : " << lt.size() << endl;

	for (it = lt.begin(); it != lt.end(); it++)
		cout << *it << " ";
	cout << endl;
	
	return 0;
}
