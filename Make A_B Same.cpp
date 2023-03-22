// https://www.codechef.com/START82C/problems/MAKE_AB_SAME
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define printT(x) cout << "#case = " << x << "\n"
#define print(x) cout << x << "\n"
#define MAX_NUM 1e9
#define YES cout << "YES" \
                 << "\n"
#define NO cout << "NO" \
                << "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a1(n), a2(n);
    for (int &i : a1)
        cin >> i;
    for (int &i : a2)
        cin >> i;
    if (a1[0] != a2[0] || a1[n - 1] != a2[n - 1])
    {
        NO;
        return;
    }

    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (a1[i] == 0)
            a++;
        else
            b++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a1[i] != a2[i] && a1[i] == 0 && b == 0)
        {
            NO;
            return;
        }
        if (a1[i] != a2[i] && a1[i] == 1)
        {
            NO;
            return;
        }
    }
    YES;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
