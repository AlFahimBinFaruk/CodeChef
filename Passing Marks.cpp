// https://www.codechef.com/problems/CUTOFF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int r;
        for (int i = n - 1; i >= 0; i--)
        {
            r = arr[i];
            x--;
            if (x <= 0)
            {
                break;
            }
        }

        cout << (r - 1) << endl;
    }
    return 0;
}
