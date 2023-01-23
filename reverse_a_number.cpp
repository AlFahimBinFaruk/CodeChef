// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    // This is a Fixed way.
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        
        int result = 0;
        
        while(num){
            int lastDigit = num % 10; // isolate the last digit
            result = (result*10)+lastDigit; // append the last digit to result
            num = num/10; // remove the last digit from number.
        }
        
        cout << result << endl;
        
    }

    return 0;
}
