// https://cses.fi/problemset/task/2216/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[n+1] = {0};
    for(int i=1; i<=n; i++){
        int num;
        cin >> num;
        arr[num] = i;
    }

    long long r = 1;
    long long l = 1;
    for(int i=1; i<=n; i++){
        if(l > arr[i]){
            r++;
        }
        l = arr[i];
    }

    cout << r << endl;
    return 0;
}
