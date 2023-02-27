// https://cses.fi/problemset/task/1629/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin >> n;

    vector<pair<int,int>> arr;
    for(int i=1; i<=n; i++){
        int n1,n2;
        cin >> n1 >> n2;
        arr.push_back({n2,n1}); // ending , starting
    }
    sort(arr.begin(),arr.end());


    int result = 0;
    int prevEnd = -1;
    for(const pair<int,int>& i:arr){
       if(i.second >= prevEnd){
        result++;
        prevEnd = i.first;
       }
    }

    cout << result << endl;
	return 0;
}
