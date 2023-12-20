//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the
    int posOfRightMostDiffBit(int m, int n)
    {
         if(m==n) return -1;
        int cnt=1;
        while(m or n){
            int x=m%2;
            int y=n%2;
            if(x!=y) return cnt;
            else cnt++;
            m/=2;
            n/=2;
        }
        return 0;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends