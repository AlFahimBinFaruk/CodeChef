// https://cses.fi/problemset/task/1661/

// O(n^2)
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n, x;
	cin >> n >> x;

	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int i = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int r = i;

		while (r < n)
		{
			sum += arr[r];
			r++;
			if (sum == x)
			{
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return 0;
}

// O(nlogn)
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n, x;
	cin >> n >> x;

	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	long long prefixSum = 0;
	map<long long, long long> sums;
	sums[0] = 1;

	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		prefixSum += arr[i];

		ans += sums[prefixSum - x];
		sums[prefixSum]++;
	}

	cout << ans << "\n";
}

int main()
{
	solve();
	return 0;
}
