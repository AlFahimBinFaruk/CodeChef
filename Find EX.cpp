// https://www.codechef.com/START82C/problems/FIND_X
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define printT(x) cout << "#case = " << x << "\n"
#define print(x) cout << x << "\n"
#define MAX_NUM 1e9
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if((a+1)%b==(c+1)%d){
        print(1);
    }else{
        ll md = a%b;
        ll a2=a-md;
        ll bdGCD=(b*d)/__gcd(b,d);
        a2+=bdGCD;
        print((a2-a));
    }
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
