//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends



void pushAtbottom(stack<int>&st,int smallest){
    if(st.empty() || st.top() <= smallest){
        st.push(smallest);
        return;
    }
    int ele = st.top();
    st.pop();
    pushAtbottom(st,smallest);
    st.push(ele);
}
void SortedStack :: sort()
{
   if(s.empty())return;
   int ele = s.top();
   s.pop();
   sort();
   pushAtbottom(s,ele);
}