//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

void primes(int n, vector<long long>& prime, vector<long long>& p) {
    prime[1] = prime[0] = 0;
    for (long long i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            for (long long j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
            p.push_back(i);
        }
    }
}
int sumOfPowers(int a, int b) {
    int n = b ;
    vector<long long> prime(n + 1, 1);
    vector<long long> p;
    primes(n, prime, p);
    int ans = 0;
    for (int i = a; i <= b; i++) {
            int num = i;
            int r = 0;
            int j = 0;
            while (num > 1 and j<p.size()) 
            {
                if (prime[num]==1){
                    r++;
                    num = 1;
                }
                else if (num % p[j] == 0) {
                    r++;
                    num = num / p[j];
                }
                else{
                     j++;
                }
               
            }
            ans += r;
        }
    return ans;
}
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends