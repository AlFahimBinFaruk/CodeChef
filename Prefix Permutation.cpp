// https://www.codechef.com/problems/SUMPERM
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    if(n % 2 != 0){
	        cout << -1 << "\n";
	    }else{
	        for(int i=1; i<=n; i+=2){
	            cout << (i+1) << " " << i << " ";
	        }
	    }
	    
	    cout << "\n";
	}
	return 0;
}
