//https://www.codechef.com/problems/STONES
#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string jewl;
		string minedStones;
		cin >> jewl;
		cin >> minedStones;

		map<char,int> myMap;
		for(int i=0; i<jewl.size(); i++){
			myMap[jewl[i]]++;
		}

		int result = 0;
		for(int i=0; i<minedStones.size(); i++){
			if(myMap.find(minedStones[i]) != myMap.end()){
				result++;
			}
		}

		cout << result << endl;
	}
	return 0;
}
