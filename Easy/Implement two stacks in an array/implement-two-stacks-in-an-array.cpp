//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {

	int arr[1000];
	int top1;
	int top2;
	int size;
public:

twoStacks(int s = 100)
	{
		size = s;
		top1 = -1;
		top2 = -1;
	}
	void push1(int x)
	{
	    if(top1==-1){
	        top1++;
	    }
	    else{
	        top1++;
	        top1++;
	    }
		arr[top1] = x;
	}


	void push2(int x)
	{
		top2++;
		top2++;
		arr[top2] = x;
	}
	int pop1()
	{
		int a = -1;
		if (top1 == -1)return a;
		else {
			a = arr[top1];
			if (top1 == 0)top1 = -1;
			else {
				top1 = top1 - 2;
			}
		}
		return a;
	}
	int pop2()
	{
		int a = -1;
		if (top2 == -1)return a;
		else {
			a  = arr[top2];
			if (top2 == 1)top2 = -1;
			else {
				top2 = top2 - 2;
			}
		}
		return a;
	}
};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends