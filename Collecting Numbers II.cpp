// https://cses.fi/problemset/task/2217
// TLE error.
#include <bits/stdc++.h>
using namespace std;

void swap(long long *a, long long *b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    long long n, m;
    cin >> n >> m;

    long long arr[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (m--)
    {
        long long n1, n2;
        cin >> n1 >> n2;
        swap(&arr[n1], &arr[n2]);

        long long newArr[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            long long num = arr[i];
            newArr[num] = i;
        }

        long long r = 1;
        long long l = 1;

        for (int i = 1; i <= n; i++)
        {
            if (l > newArr[i])
            {
                r++;
            }
            l = newArr[i];
        }

        cout << r << endl;
    }

    return 0;
}
