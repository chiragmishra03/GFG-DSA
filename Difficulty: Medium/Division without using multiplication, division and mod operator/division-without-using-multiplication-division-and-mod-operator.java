//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GfG {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            String S[] = br.readLine().split(" ");

            long a = Long.parseLong(S[0]);

            long b = Long.parseLong(S[1]);

            Solution ob = new Solution();

            System.out.println(ob.divide(a, b));
            t--;
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public static long divide(long dividend, long divisor) {
        long sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        long hi = Math.abs(dividend);
        long lo= 1;
        long ans=0;
        while(lo<=hi){
            long mid = (lo+hi)/2;
            if(Math.abs(mid*divisor)== Math.abs(dividend)){
                ans=mid;
                break;
            }
            else if(Math.abs(mid*divisor) <  Math.abs(dividend)){
                ans=mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return sign*ans;
    }
}