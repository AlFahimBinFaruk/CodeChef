#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int sizeOp;
        int sizeHuan;
        cin >> sizeOp >> sizeHuan;
        
        vector<int> opArr(sizeOp);
        vector<int> huanArr(sizeHuan);

        for(int i=0; i<sizeOp; i++){
            cin >> opArr[i];
        }

        for(int i=0; i<sizeHuan; i++){
            cin >> huanArr[i];
        }
        // sort huan arr in desending order
        sort(huanArr.rbegin(),huanArr.rend());

        int i=0;//op
        int j=0;//huan
        while(i<sizeOp && j<sizeHuan){
            if(opArr[i] == huanArr[j]){
                i++;
                j++;
            }else if(opArr[i]>huanArr[j]){
                j++;
            }else{
                i++;
            }
        }

        if(j==sizeHuan){
            // if there is no element left
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(int i=sizeHuan-1; i>j; i--){
                cout << huanArr[i] << " ";
            }
            for(int i=0; i<=j; i++){
                cout << huanArr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
