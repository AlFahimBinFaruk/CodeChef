// https://www.codechef.com/problems/RECNDSTR
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string myStr;
		cin >> myStr;

		string lStr = "";
		for(int i=0; i<myStr.size()-1; i++){
			lStr+=myStr[i+1];
		}
		lStr += myStr[0];

		string rStr = "";
		rStr += myStr[myStr.size()-1];
		for(int i=0; i<myStr.size()-1; i++){
			rStr += myStr[i];
		}

		if(lStr == rStr){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
