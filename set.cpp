#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> se;

	se.insert(3);
	se.insert(1);
	se.insert(5);
	se.insert(9);
	se.insert(7);

	if (se.count(9) > 0)
		cout << "success! : 9" << endl;
	else
		cout << "fail! : 9" << endl;

	if (se.count(6) > 0)
		cout << "success! : 6" << endl;
	else
		cout << "fail! : 6" << endl;

	return 0;
}
