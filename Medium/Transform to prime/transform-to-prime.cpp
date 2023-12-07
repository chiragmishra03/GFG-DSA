//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int minNumber(int arr[],int n)
    {
    bool isPrime[1000001];
	memset(isPrime , true , sizeof(isPrime));
	for (int i = 2; i * i <= 1000001; i++) {
		if (isPrime[i]) {
			for (int j = 2 * i ; j <= 1000001 ; j = j + i) {
				isPrime[j] = false;
			}
		}
	}
	int sum = accumulate(arr,arr+n,0);

	if(isPrime[sum]==1)return 0;
	int i=sum+1;
	while(true){
	    if(isPrime[i]==true)return i - sum;
	    i++;
	}
	return 0;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends