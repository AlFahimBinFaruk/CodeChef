// https://www.codechef.com/START82C/problems/MATDIF
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
    int n;
    cin >> n;
    int num1=1,num2=2;
    int final = n*n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num1<=final){
                cout << num1 << " ";
                num1+=2;
            }else{
                cout << num2 << " ";
                num2+=2;
            }
        }
        cout << "\n";
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
