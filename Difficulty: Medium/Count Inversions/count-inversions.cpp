//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
 
long long int mergeAndCount(int low, int high, int mid, long long arr[]) {
    vector<long long int> temp;
    int left = low;
    int right = mid + 1;
    long long int count = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            count += (mid - left + 1);
            right++;
        }
    }

    // Copy the remaining elements from the left subarray
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy the remaining elements from the right subarray
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted subarray back into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return count;
}

long long int mergeSortAndCount(int low, int high, long long arr[]) {
    long long int count = 0;
    if (low < high) {
        int mid = (low + high) / 2;
        count += mergeSortAndCount(low, mid, arr);
        count += mergeSortAndCount(mid + 1, high, arr);
        count += mergeAndCount(low, high, mid, arr);
    }
    return count;
}

long long int inversionCount(long long arr[], int n) {
    return mergeSortAndCount(0, n - 1, arr);
}

};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends