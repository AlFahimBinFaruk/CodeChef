// https://www.codechef.com/START77D/problems/TEKKEN
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;

        int at = a;
        int bt = b;
        int ct = c;

	    int r;
	    
        // first case
        // a vs b
	    int ab = min(a,b);
	    a = a - ab;
	    b = b - ab;
	    
	    // b vs c
	    c = c - min(b,c);
	    
	    // a vs c
	    a = a - min(a,c);
	    
        r = a;

        // second case
        // b vs c
        int bct = min(bt,ct);
        bt = bt - bct;
        ct = ct - bct;

        // a vs b
        at = at - min(bt,at);

        // a vs c
        at = at - min(ct,at);

        r = at;

        if(r > 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
	    
	}
	return 0;
}
