#include "Parts123.h"
#include "Parts45.h"
int main() {
	int test2, test3;
	int blah = 0;
	exception(false, true);
	howLong(blah);
	v.push_back(58);
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;
	q.push("One");
	q.push("Two");
	q.push("Three");
	q.push("Four");
	for (int i = 0; i <= q.size(); i++)
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	s.insert(10);
	s.insert(10);
	s.insert(5);
	for (int i : s)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << gcd(100, 28) << endl;
	cout << fib(6) << endl;
	cout << pow(3, 4) << endl;
	cout << gcd_iter(2, 28) << endl;
	cout << fib_iter(7) << endl;
	//cin >> test2;
	//test(test2);
	return 0;
}
