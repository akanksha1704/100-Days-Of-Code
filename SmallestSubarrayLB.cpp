
// Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

// Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).

// Example 1:

// Input:
// A[] = {1, 4, 45, 6, 0, 19}
// x  =  51
// Output: 3
// Explanation:
// Minimum length subarray is 
// {4, 45, 6}

// Example 2:
// Input:
// A[] = {1, 10, 5, 2, 7}
//    x  = 9
// Output: 1
// Explanation:
// Minimum length subarray is {10}
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function sb() which takes the array A[], its size N and an integer X as inputs and returns the required ouput.


// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N, x ≤ 105
// 1 ≤ A[] ≤ 104

//Brute Force
//Smallest Subarray with sum greater than a given value
//T(n)=O(n*n)
//S=O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;
    int mi=INT_MAX;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s>x){
                mi=min(mi,j-i+1);
            }
        }
    }
    cout<<mi<<endl; 





return 0;}


//Smallest Subarray with sum greater than a given value
//T(n)=O(n)
//S=O(1)
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}// } Driver Code Ends




int sb(int a[], int n, int x)
{
    // Your code goes here   
    int i=0,j=0;
    int mi=INT_MAX;
    int s=0;
    while(i<=j && j<n){
        while(s<=x && j<n){
            s+=a[j++];
        }
        while(s>x && i<j ){
            mi=min(mi,j-i);
            s-=a[i];
            i++;
        }
    }
  return mi;
	   
