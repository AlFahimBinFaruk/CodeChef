// https://cses.fi/problemset/task/1091/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
    cin >> n >> m;

    multiset<int> s;
    for(int i=1; i<=n; i++){
        int num;
        cin >> num;
        s.insert(num);
    }

    while(m--){
        int ca;
        cin >> ca;

        auto it = s.upper_bound(ca);
        if(it==s.begin()){
            // if the ticket exact or less amount is not found.
            cout << -1 << endl;
        }else{
            cout << *(--it) << endl;
            s.erase(it);
        }
    }
	return 0;
}
