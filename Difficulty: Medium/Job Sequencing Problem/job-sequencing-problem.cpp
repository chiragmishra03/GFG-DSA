//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
         vector<pair<int, int>> jobs;
        for (int i = 0; i < n; i++) {
            jobs.push_back({arr[i].profit, arr[i].dead});
        }

        // Sort jobs in descending order of profit
        sort(jobs.begin(), jobs.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.first > b.first;
        });

        // Find the maximum deadline to determine the size of the slot array
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].dead > maxDeadline) {
                maxDeadline = arr[i].dead;
            }
        }

        // Initialize slot array (size maxDeadline) with -1 indicating empty slots
        vector<int> slot(maxDeadline, -1);

        int count = 0;
        int profit = 0;

        // Iterate over all jobs to schedule them
        for (int j = 0; j < jobs.size(); j++) {
            int pay = jobs[j].first;
            int deadline = jobs[j].second;

            // Find a free slot for this job, starting from the last possible slot
            for (int i = deadline - 1; i >= 0; i--) {
                if (slot[i] == -1) {  // If slot is empty
                    count++;
                    profit += pay;
                    slot[i] = j;  // Mark this slot as occupied
                    break;
                }
            }
        }

        return {count, profit};
       
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends