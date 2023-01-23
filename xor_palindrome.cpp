#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
		string numStr;

		cin >> n;
		cin >> numStr;

		int result = 1;
		int r=n-1;
		for(int l=0; l<r; l++){
			result += numStr[l]!=numStr[r];
			r--;
		}
		// for mismatch once-twice we only need to do one operatin to match it..
		cout << (result/2) << endl;
	}
	return 0;
}
