// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


bool sortHelper(struct Item a,struct Item b){
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    
    return r1 > r2;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {   
        // sort the arr
        sort(arr,arr + n,sortHelper);
        
        double result  = 0.0;
        for(int i=0; i<n; i++){
            if(arr[i].weight <= W){
                result += arr[i].value;
                W -= arr[i].weight;
            }else{
                // add the factorial of its value.
                result += arr[i].value * ((double)W / (double)arr[i].weight);
                break;
            }
        }
        return result;
    }
        
};


int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
