// https://cses.fi/problemset/task/1619/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin >> n;

    vector<pair<int,int>> arr;
    for(int i=1; i<=n; i++){
        int n1,n2;
        cin >> n1 >> n2;

        arr.push_back({n1,1});
        arr.push_back({n2,-1});
    }
    sort(arr.begin(),arr.end());

    int result = 0;
    int currC = 0;
    for(const pair<int,int>& t:arr){
        currC += t.second;
        result = max(result,currC);
    }

    cout << result << endl;
	return 0;
}
