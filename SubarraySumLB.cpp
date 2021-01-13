
// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

// Example 1:

// Input:
// 5
// 4 2 -3 1 6

// Output: 
// Yes

// Explanation: 
// 2, -3, 1 is the subarray 
// with sum 0.
// Example 2:

// Input:
// 5
// 4 2 0 1 6

// Output: 
// Yes

// Explanation: 
// 0 is one of the element 
// in the array so there exist a 
// subarray with sum 0.
// Your Task:
// You only need to complete the function subArrayExists() that takes array and n as parameters and returns true or false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the drivers code.

// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n).

// Constraints:
// 1 <= N <= 104
// -105 <= a[i] <= 105

//Brute Force:T(n)=O(n*n) space=O(1)
//Find if there is any subarray with sum equal to 0

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int f=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s=s+a[i];
            if(s==0){
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
    }
    if(f==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


return 0;}

//Efficient approach T(n)=O(n)  space=O(n)
// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    int s=0;
    int f=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        s=s+arr[i];
        if(s==0 || m[s] ||  arr[i]==0){
           f=1;
           break;
        }
        else{
            m[s]=1;
        }
    }
    if(f==1)
    return  true;
    else
    return  false;
    //Your code here
}

