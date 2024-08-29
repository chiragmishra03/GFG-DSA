//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  
  static bool myComp(Item a , Item b){
      double a1 = (double)a.value/(double)a.weight;
      double b1 = (double)b.value/(double)b.weight;
      return a1>b1;
  }
    double fractionalKnapsack(int wt, Item arr[], int n) {
        sort(arr , arr+n,myComp);
        double knapsack =0;
        for(int i=0;i<n;i++){
            Item a = arr[i];
            if(wt<=0)break;
            if(wt >= a.weight){
                knapsack += a.value;
                wt -= a.weight;
            }
            else{
                double element = ((double)a.value/(double)a.weight)*wt;
                knapsack +=element;
                wt -= a.weight;
            }
        }
        return knapsack;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends