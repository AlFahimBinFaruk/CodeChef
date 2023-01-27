// https://www.codechef.com/problems/PERMUTATION
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// permutation = {3,1,1,2} =  {1,2,3,4}
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    int myArr[n];
	    for(int i=0; i<n; i++){
	        cin >> myArr[i];
	    }
	    sort(myArr,myArr + n);
	    
	    int result = 0;
	    for(int j=0; j<n; j++){
	        if(j+1-myArr[j] < 0){
	            result = -1;
	            break;
	        }
	        result += j+1-myArr[j];
	    }
	    
	    cout << result << endl;
	}
	return 0;
}
