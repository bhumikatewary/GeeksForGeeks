// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

// Complete this function
string isPrime(int n) {
    bool ans=true;
    for (int i = 2; i <= sqrt(n); i++) {
        if(n%i==0){
            ans=false;
            break;
        }
    }
    if(ans && n!=1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}  // } Driver Code Ends
