// https://cses.fi/problemset/task/1141/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	map<long long, int> tm;
	long long r = 0, cr = 0, i = 0, j = 0;
	while (j < n)
	{
		if (tm.find(arr[j]) == tm.end() || tm[arr[j]] == 0)
		{
			// not found
			cr++;
			tm[arr[j]] += 1;
			j++;
		}
		else
		{
			// found
			cr--;
			tm[arr[i]] -= 1;
			i++;
		}
		r = max(r, cr);
	}

	cout << r << endl;
	return 0;
}
