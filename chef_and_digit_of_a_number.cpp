// https://www.codechef.com/problems/LONGSEQ?tab=statement
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string str;
	    cin >> str;
	    
	    int countOfOne = 0;
	    for(int i=0; i<str.size(); i++){
	        countOfOne = countOfOne+(str[i]-'0');
	    }
	    
	    if((countOfOne+1 == str.size()) || (countOfOne-1 == 0)){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
