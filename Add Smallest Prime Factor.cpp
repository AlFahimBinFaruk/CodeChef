// https://www.codechef.com/problems/PRIMEFACT

// 01 . TLE ERROR.
#include <bits/stdc++.h>
using namespace std;

vector<long long> factors(long long n)
{
	vector<long long> r;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			r.push_back(i);
	}
	return r;
}

bool isPrime(long long n)
{
	if (n == 1)
	{
		return false;
	}
	for (int i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

long long primeFactor(long long n)
{
	vector<long long> mv = factors(n);

	for (auto i = mv.begin(); i != mv.end(); i++)
	{
		if (isPrime(*i))
		{
			return *i;
		}
	}
}

int main()
{
	long long t;
	cin >> t;

	while (t--)
	{
		long long x, y;
		cin >> x >> y;

		long long time = 0;

		while (x < y)
		{
			x += primeFactor(x);
			time++;
		}

		cout << time << endl;
	}
	return 0;
}

// Working solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int x, y;
		cin >> x >> y;

		int result = 0;
		if (x % 2 == 0)
		{
			// The smallest prime number of even numbers will always be 2.
			int need = y - x;
			result += (need / 2);
			if (need % 2 == 1)
			{
				result++;
			}
			cout << result << endl;
		}
		else
		{
			if (x % 3 == 0)
			{
				x += 3;
				result++;
			}

			if (x % 5 == 0)
			{
				x += 5;
				result++;
			}

			if (x % 7 == 0)
			{
				x += 7;
				result++;
			}

			int need = y - x;
			result += (need / 2);
			if (need % 2)
			{
				result++;
			}

			cout << result << endl;
		}
	}
	return 0;
}
