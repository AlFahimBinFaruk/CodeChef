// https://www.codechef.com/problems/CK87MEDI
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    int k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	       cin >> arr[i];
	    }
	    
	    sort(arr,arr+n);
	    cout << arr[(n+k)/2] << endl;
	}
	return 0;
}
