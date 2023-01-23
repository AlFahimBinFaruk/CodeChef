// https://www.codechef.com/problems/ERROR
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string numStr;
	    cin >> numStr;
	    
	    string result = "";
	    for(int i=0; i<numStr.size(); i++){
	        result += numStr[i];
		    result += numStr[i+1];
		    result += numStr[i+2];
	        if(result == "101" || result == "010"){
	           break;
	        }
	        result = "";
	    }
	   
	    if(result == "101" || result == "010"){
	        cout << "Good" << endl;
	    }else{
	        cout << "Bad" << endl;
	    }
	}
	return 0;
}
