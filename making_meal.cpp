// https://www.codechef.com/problems/CFMM?tab=statement
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	// codechef
	// c = 2,o=1,d=1,e=2,h=1,f=1
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		map<char,int> sMap;
		for(int i=0; i<n; i++){
			string myStr;
			cin >> myStr;
			for(int j=0; j<myStr.size(); j++){
				sMap[myStr[j]]++;
			}
		}
		
		int result = min({sMap['c']/2,sMap['o'],sMap['d'],sMap['e']/2,sMap['h'],sMap['f']});
        
		cout << result << endl;
	}
	return 0;
}
