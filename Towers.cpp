// https://cses.fi/problemset/task/1073/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	multiset<long long> ms;
	while (n--)
	{
		long long i;
		cin >> i;

		auto t = ms.upper_bound(i);
		if (t == ms.end())
		{
			// if i or disk greater than i not found (i is the biggest) create new tower.
			ms.insert(i);
		}
		else
		{
			// update existing tower.
			ms.erase(t);
			ms.insert(i);
		}
	}

	cout << ms.size() << endl;
	return 0;
}
