// Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

// Example 1:

// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// Output: 6
// Explanation: The consecutive numbers 
// here are 1, 2, 3, 4, 5, 6. These 6 
// numbers form the longest consecutive
// subsquence.
// Example 2:

// Input:
// N = 7
// a[] = {1,9,3,10,4,20,2}
// Output: 4
// Explanation: 1, 2, 3, 4 is the longest
// consecutive subsequence.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findLongestConseqSubseq() which takes the array arr[] and the size of the array as inputs and returns the length of the longest subsequence of consecutive integers. 

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= N <= 105
// 0 <= a[i] <= 105

//Brute Force Approach
//Find longest coinsecutive subsequence
//t(n)=O(nlogn)
//space=O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    vector<int>v;
    v.push_back(a[0]);
    int coun=0,ans=0;

    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1])
            v.push_back(a[i]);
    }

    for(int i=0;i<v.size();i++){
        if(i>0 && v[i]==v[i-1]+1){
            coun++;
        }
        else{
            coun=1;
        }
        ans=max(ans,coun);
    }
    cout<<ans<<endl;

return 0;}

//Efficient Approach// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int a[], int n)
{
  set<int>h;
  int  longest=0;
  for(int i=0;i<n;i++)
    h.insert(a[i]);

for(int i=0;i<n;i++){
    if(!h.count(a[i]-1)){
        int currNum=a[i];
        int currLen=1;
        while(h.count(currNum+1)){
            currNum+=1;
            currLen+=1;
        }
        longest = max(longest,currLen);
    }
}
return longest;
}




