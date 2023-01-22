// https://www.codechef.com/problems/ABSTRING
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	// words have to be is same ammount of greater in-order for them to match.
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
        
		map<char,int> myMap;

		string para;
		cin >> para;

		for(auto i=para.begin(); i!=para.end(); i++){
			myMap[*i]++;
		}

		string result = "YES";
		for(auto i=myMap.begin(); i!= myMap.end(); i++){
			if((i->second % 2) != 0){
			    result = "NO";
			    break;
			}
		}

		cout << result << endl;
		
	}
	return 0;
}
