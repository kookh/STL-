#include<iostream>
#include<queue>
#include<functional>
using namespace std;

int main()
{
	//priority_queue<char> pq;
	priority_queue<char, vector<char>, greater<char>> pq;

	pq.push('A');
	pq.push('B');
	pq.push('C');
	
	pq.push('A');
	pq.push('B');
	pq.push('C');

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	return 0;
}
