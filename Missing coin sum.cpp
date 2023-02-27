// https://cses.fi/problemset/task/2183/
// https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/
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

    long long r = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= r){
            r = r + arr[i];
        }else{
            break;
        }
    }

    cout << r << endl;
    return 0;
}
