
// Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

// Insert
// Remove
// Replace
 

// Example 1:

// Input: 
// s = "geek", t = "gesek"
// Output: 1
// Explanation: One operation is required 
// inserting 's' between two 'e's of str1.

// Example 2:

// Input : 
// s = "gfg", t = "gfg"
// Output: 
// 0
// Explanation: Both strings are same.
 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation required to make both strings equal. 

 

// Expected Time Complexity: O(n2)
// Expected Space Complexity: O(n2)
 
// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	int minimum(int x, int y, int z)
	{
	    return min(min(x, y), z); 
	    
	}
 
		int editDistance(string s1, string s2)
		{
		    // Code here
		    int m;
    int n;
    m=s1.length();
    n=s2.length();
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){

            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+minimum(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
        }
    }
		        return dp[m][n];
		        
		    
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	int ans = ob.editDistance(s, t);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
// Constraints:
// 1 <= Length of both strings <= 100
// Both the strings are in lowercase.
