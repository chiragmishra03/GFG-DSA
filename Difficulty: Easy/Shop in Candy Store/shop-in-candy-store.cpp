//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies , candies+N);
        int mini = 0;
        int size=N;
        for(int i=0;i<size;i++)
        {
            mini+=candies[i];
            size = size-K;
        }
        int maxi = 0;
        size=0;
        for(int i=N-1;i>=size;i--)
        {
            maxi+=candies[i];
            size = size+K;
        }
        
        return {mini,maxi};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends