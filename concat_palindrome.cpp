// https://www.codechef.com/problems/CONCATPAL
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, y;
    string xs, ys;

    cin >> x >> y >> xs >> ys;

    unordered_map<char, int> m;
    if (y > x)
    {
        swap(y, x);
        swap(ys, xs);
    }

    for (int i = 0; i < x; i++)
    {
        m[xs[i]] += 1;
    }

    for (int j = 0; j < y; j++)
    {
        m[ys[j]] -= 1;
    }

    bool flag = true;
    int count = 0;
    for (auto i : m)
    {
        if (i.second < 0)
        {
            flag = false;
            break;
        }
        else if (i.second % 2 == 0)
        {
            continue;
        }

        if (count)
        {
            flag = false;
        }
        else
        {
            count = 1;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}
