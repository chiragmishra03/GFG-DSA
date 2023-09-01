//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    if(len==1)return 0;
    long long int i=0;
       long long int j = len-1;
long long int maxi = INT_MIN;
        while(i!=j){
           long long int h = min(A[i],A[j]);
           long long int width = j-i;
           long long int water = width*h;
            maxi = max(water,maxi);
            if(A[i]<A[j]){
                i++;
            }
            else if(A[j]<A[i]){
                j--;
            }
            else{
                if(A[i+1]>A[j-1]){
                    i++;
                }
                else{
                    j--;
                }
            }
        }

        return maxi;

}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends