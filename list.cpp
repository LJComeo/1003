#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	ljc::list<int> l(4, 5);
	int tmp = l.size();
	cout << tmp << endl;

	return 0;
}





int test()
{
	ljc::list<int> l(4, 5);
	int arr[5] = { 1, 3, 5, 7, 9 };
	ljc::list<int> l2(arr, arr + 5);
	ljc::list<int> l3 = l2;

	for (auto i = l3.begin(); i != l3.end(); i++)
	{
		cout << *i << ' ';
	}


	return 0;
}