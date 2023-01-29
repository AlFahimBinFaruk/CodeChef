// https://www.codechef.com/problems/OJUMPS
#include <iostream>
using namespace std;

int main() {
    long long int a;
    cin >> a;
    
    // we can see that positions that are reachable are either divided by 3,or (position-1) is divided by 6... 
    if((a%3 == 0) || ((a - 1)%6 == 0)){
		  cout  << "yes" << endl;
	  }else{
		  cout << "no" << endl;
	  }
	  return 0;
}
