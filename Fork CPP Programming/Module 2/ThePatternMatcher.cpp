//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
        int n=s.size();
        int count=0; 
        int i=0;
        int ans=1;
        while(i<n){
            while(s[i]=='x'){
                count++;
                i++;
            }
            while(s[i]=='y'){
                count--;
                i++;
            }
            if(count!=0){
                ans=0;
            }
        }
       
       cout<<ans<<endl;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends
