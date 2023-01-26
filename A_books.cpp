// https://www.codechef.com/problems/BIT2A
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    int arrOne[n];
	    int result[n];
	    
	    for(int i=0; i<n; i++){
	        cin >> arrOne[i];
	    }
	    
	    for(int j=0; j<n; j++){
	        int count = 0;
	        int cur = arrOne[j];
	        for(int k=0; k<n; k++){
	            if(arrOne[k]>cur){
	                count++;
	            }
	        }
	        result[j] = count;
	    }
	    
	    // print result
	    for(int a=0; a<n; a++){
	        cout << result[a] << " ";
	    }
	    cout << "\n";
	    
	}
	return 0;
}
