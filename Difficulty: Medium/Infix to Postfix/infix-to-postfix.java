//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {

    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            System.out.println(
                new Solution().infixToPostfix(br.readLine().trim()));
        }
    }
}
// } Driver Code Ends


class Solution {
    // Function to convert an infix expression to a postfix expression.
    public static String infixToPostfix(String exp) {
        Stack<Character>st = new Stack<>();
        StringBuilder ans = new StringBuilder("");
        for(int i=0;i<exp.length();i++){
            char ch = exp.charAt(i);
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || Character.isDigit(ch)){
                ans.append(ch);
            }
            else{
                if(ch=='^'){
                    if(!st.empty() && (st.peek()=='^')){
                        char p = st.peek();
                        st.pop();
                        ans.append(p);
                    }
                    st.push(ch);
                }
                else if(ch=='*'|| ch=='/')
                {
                    while(!st.empty() && (st.peek()=='/' || st.peek()=='*' || st.peek()=='^')){
                        char p = st.peek();
                        st.pop();
                        ans.append(p);
                    }
                    st.push(ch);
                }
                else if(ch=='+' || ch=='-'){
                     while(!st.empty() && (st.peek()=='+' || st.peek()=='-'
                     || st.peek()=='^' || st.peek()=='*' || st.peek()=='/'))
                     {
                        char p = st.peek();
                        st.pop();
                        ans.append(p);
                    }
                    st.push(ch);
                }
                else if(ch==')'){
                    while(!st.empty() && (st.peek()!='(')){
                        char p = st.peek();
                        st.pop();
                        ans.append(p);
                    }
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }}
            
            while(!st.empty()){
                char p = st.peek();
                st.pop();
                ans.append(p);
            }


            return ans.toString();
    }
}