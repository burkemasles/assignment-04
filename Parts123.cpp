#include "Parts123.h"
void exception(bool canHeThrow, bool canHeCatch)
{	
	try
	{
		if (canHeThrow == true)
		{
			cout << "What a good throw!!" << endl;
			throw (true);
		}
		else
			cout << "The throw only made it a foot before hitting the ground..." << endl;
	}
	catch (bool a)
	{
		if (canHeCatch == true)
			cout << "And the throw was caught beautifuly!!" << endl;
		else
			cout << "But he misses the catch!! Lucky there was someone to catch it before the OS did!!" << endl;
	}
}
vector<int> v = { 53, 23, 24, -1, 97 };
queue<string> q;
set<int> s;
