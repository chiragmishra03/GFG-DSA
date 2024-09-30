//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;

            int k = Integer.parseInt(br.readLine());
            // Create Solution object and find closest sum
            Solution ob = new Solution();
            int ans = ob.countPairsWithDiffK(arr, k);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java
class Solution {
    int countPairsWithDiffK(int[] arr, int k) {
        int n = arr.length;
        int pairCount = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        for(int i=0;i<n;++i) {
            if(k == 0) {
                if(hm.containsKey(arr[i])) {
                    pairCount += hm.get(arr[i]);
                }
            }
            else {
                int target1 = arr[i] + k;
                int target2 = arr[i] - k;
                if(hm.containsKey(target1)) {
                    pairCount += hm.get(target1);
                }
                if(hm.containsKey(target2)) {
                    pairCount += hm.get(target2);
                }
            }
            if(!hm.containsKey(arr[i])) {
                hm.put(arr[i], 1);
            }
            else {
                hm.put(arr[i], hm.get(arr[i]) + 1);
            }
        }
        return pairCount;
    }
}