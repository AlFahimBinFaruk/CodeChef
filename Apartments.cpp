// https://cses.fi/problemset/task/1084/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int arrN[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrN[i];
    }
    sort(arrN, arrN + n);

    int arrM[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arrM[i];
    }
    sort(arrM, arrM + m);

    int r = 0;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (abs(arrN[i] - arrM[j]) <= k)
        {
            r++;
            i++;
            j++;
        }
        else if (arrN[i] < arrM[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << r << endl;

    return 0;
}
