
// Given a string str of length N, you have to find number of palindromic subsequence (need not necessarily be distinct) which could be formed from the string str.
 

// Example 1:

// Input: 
// Str = "abcd"
// Output: 
// 4
// Explanation:
// palindromic subsequence are : "a" ,"b", "c" ,"d"
 

// Example 2:

// Input: 
// Str = "aab"
// Output: 
// 4
// Explanation:
// palindromic subsequence are :"a", "a", "b", "aa"
 

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countPs() which takes a string str as input parameter and returns the number of palindromic subsequence.
 

// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(N*N)


// Constraints:
// 1<=length of string str <=30

// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<iostream>
#include<cstring>
using namespace std;
 
// Function return the total palindromic subsequence
int countPS(string str);
 
// Driver program
int main()
{
   int t;
	cin>>t;
   while(t--)
	{
	string str;
cin>>str;
cout<<countPS(str)<<endl;
} 
}// } Driver Code Ends

int dp[1001][1001];

int func(int i,int j,string s){
    
    if(i>j) return 0;
    
    if(i==j) return 1;
    
    if(dp[i][j]!=-1)    return dp[i][j];
    
    if(s[i]==s[j])
        return  dp[i][j]=func(i+1,j,s)+func(i,j-1,s)+1;
    else
        return  dp[i][j]=func(i+1,j,s)+func(i,j-1,s)-func(i+1,j-1,s);
}
/*You are required to complete below method */
int countPS(string str)
{
    int n=str.length();
    dp[n][n];
    memset(dp,-1,sizeof(dp));
    return func(0,n-1,str);
   //Your code here
}
 
