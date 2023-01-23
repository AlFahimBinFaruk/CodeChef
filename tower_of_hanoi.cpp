// https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int result = 0;
        long long toh(int N, int from, int to, int aux) {
            // we can change position two times in one iteration.
            // aux rod is a rod where we will keep the disk temporarily
            if(N==0){
                return 0;
            }
            toh(N-1,from,aux,to);
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl; 
            result++;
            toh(N-1,aux,to,from);
            return result;
        }

};

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
