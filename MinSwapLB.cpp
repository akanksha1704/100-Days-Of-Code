
// Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

// Example 1:

// â€‹Input : arr[ ] = {2, 1, 5, 6, 3} and K = 3
// Output : 1
// Explanation:
// To bring elements 2, 1, 3 together, swap element '5' with '3'
// such that final array will be- arr[] = {2, 1, 3, 6, 5}

// â€‹Example 2:

// Input : arr[ ] = {2, 7, 9, 5, 8, 7, 4} and K = 6 
// Output :  2 
 

// Your Task:
// This is a function problem. The input is already taken care of by the driver code. You only need to complete the function minSwap() that takes an array (arr), sizeOfArray (n), an integer K, and return the minimum swaps required. The driver code takes care of the printing.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1)// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends


int minSwap(int *arr, int n, int k) {
    // Complet the function
    int g=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k)
            g++;
    }
    int mi=1000000000;
    int b=0;
    for(int i=0;i<g;i++){
        if(arr[i]>k)
            b++;
    }
    int i=0,j=g-1;
    while(j<n){
        mi=min(mi,b);
        j++;
        if(j<n && arr[j]>k){
            b++;
        }
        if(arr[i]>k)
            b--;
        i++;
    }
  return mi;
}
.


// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ Arri, K ≤107

