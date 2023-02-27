// https://cses.fi/problemset/task/1643
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

    long long gb = arr[0];
    long long cb = arr[0];
    for (int i = 1; i < n; i++)
    {
        cb = max(cb + arr[i], arr[i]);
        gb = max(gb, cb);
    }

    cout << gb << endl;
    return 0;
}
