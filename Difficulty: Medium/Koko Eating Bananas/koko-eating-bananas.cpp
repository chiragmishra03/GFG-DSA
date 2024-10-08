//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int KoKoEat(vector<int>& piles, int h) {
        int start=0,end=0,ans,mid,n=piles.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=piles[i];
            end=max(end,piles[i]);
        }
        start=sum/h;
        if(!start)
            start=1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int total_time=0;
            for(int i=0;i<n;i++)
            {
                total_time+=piles[i]/mid;
                if(piles[i]%mid)
                    total_time++;
            }
            if(total_time>h)
                start=mid+1;
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.KoKoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends