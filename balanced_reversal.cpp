//https://www.codechef.com/problems/BALREV
#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string myStr;
	    
	    cin >> n;
	    cin >> myStr;
	    
	    string oStr = "";
	    string oneStr = "";
	    
	    for(int i=0; i<myStr.size(); i++){
	        if(myStr[i] == '0'){
	            oStr += '0';
	        }else{
	            oneStr += '1';
	        }
	    }
	    
	    oStr += oneStr;
	    cout << oStr << endl;
	}
	return 0;
}
