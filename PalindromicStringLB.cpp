
// Given a string S, check if it is palindrome or not.

// Example 1:

// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome
// Example 2:

// Input: S = "abc" 
// Output: 0
// Explanation: S is not a palindrome
 

// Your Task:  
// You don't need to read input or print anything. Complete the function isPlaindrome() which accepts string S and returns a boolean value


// Expected Time Complexity: O(Length of S) 
// Expected Auxiliary Space: O(1) 

// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	   
	    string num=S;
	    int size=S.length();
	    int l=0,r=size-1;
	    int f=0;
	    while(l<r){
	        if(S[l]==S[r]){
	            l++;
	            r--;
	            f++;
	        }
	        else
	           break;
	    }
	    if(f!=size/2)
	        return 0;
	   else
	    return 1;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
