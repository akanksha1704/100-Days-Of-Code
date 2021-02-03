
// Given a string A and a dictionary of n words B, find out if A can be segmented into a space-separated sequence of dictionary words. 


// Example 1:

// Input:
// n = 12
// B = { "i", "like", "sam", "sung", "samsung", "mobile",
// "ice","cream", "icecream", "man", "go", "mango" }
// A = "ilike"
// Output: 1
// Explanation:The string can be segmented as "i like".

// â€‹Example 2:

// Input:
// n = 12
// B = { "i", "like", "sam", "sung", "samsung", "mobile",
// "ice","cream", "icecream", "man", "go", "mango" }
// A = "ilikesamsung"
// Output: 1
// Explanation: The string can be segmented as 
// "i like samsung" or "i like sam sung".
 

// Your Task:
// Complete wordBreak() function which takes a string and list of strings as a parameter and returns 1 if it is possible to break words, else return 0. You don't need to read any input or print any output, it is done by driver code.


// Expected time complexity: O(s2)
// â€‹Expected auxiliary space: O(s) , where s = length of string A

 

// Constraints:
// 1 <= N <= 12
// 1 <= s <=1000 , where s = length of string A
//  The length of each word is less than 15.

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);

// User code will be pasted here

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings
unordered_map<string,int>dp;
int solve(string s,vector<string>&b){
    int sz=s.length();
    if(sz==0)  return 1;
    if(dp[s]!=0) return dp[s];
    
    for(int i=1;i<=sz;i++){
        int f=0;
        string ss=s.substr(0,i);
        for(int j=0;j<b.size();j++){
            if(ss.compare(b[j])==0){
                f=1;
                break;
            }
        }
        if(f==1 && solve(s.substr(i,sz-i),b)==1)
            return dp[s]=1;
    }
    return dp[s]=-1;
}

int wordBreak(string A, vector<string> &B) {
    //code here
    int x=solve(A,B);
    if(x==1)
        return 1;
    else
        return 0;
}
