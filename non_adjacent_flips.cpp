// https://www.codechef.com/problems/NONADJFLIP?tab=statement
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string numStr;
	    
	    cin >> n;
	    cin >> numStr;
	    
	    int ans=0;
	    int demo = 0;
	    for(int i=0; i<n; i++){
	        if(numStr[i] == '1'){
	            demo++; // count how many 1 we have sequentially
	        }else{
	            demo = 0;
	        }
			ans = max(ans,demo);
	    }
	    
	    if(ans == 0){
	        cout << 0 << endl;
	    }else if(ans == 1){
	        cout << 1 << endl;
	    }else{
	        cout << 2 << endl;
	    }
	}
	return 0;
}
