// https://cses.fi/problemset/task/1074/
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
    sort(arr, arr + n);

    long long target = n / 2;
    long long cost = 0;
    for (int i = 0; i < n; i++)
    {
        cost += abs(arr[i] - arr[target]);
    }

    cout << cost << endl;
    return 0;
}
