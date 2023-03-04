// https://cses.fi/problemset/task/1163/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long x, n;
	cin >> x >> n;

	set<long long> lightP;
	multiset<long long> gap;

	lightP.insert(0);
	lightP.insert(x);
	// initial gap without light.
	gap.insert(x - 0);

	for (int i = 0; i < n; i++)
	{
		long long p;
		cin >> p;

		lightP.insert(p);

		auto it = lightP.find(p);
		long long prevP = *prev(it);
		long long nextP = *next(it);

		// remove max gap from prev positions.
		gap.erase(gap.find(nextP - prevP));

		// insert updated gap.
		gap.insert(p - prevP);
		gap.insert(nextP - p);

		cout << *gap.rbegin() << "\n";
	}
}

int main()
{
	solve();
	return 0;
}
