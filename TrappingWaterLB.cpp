// Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

// Example 1:

// Input:
// N = 6
// arr[] = {3,0,0,2,0,4}
// Output: 10
// Explanation: 

 

// Example 2:

// Input:
// N = 4
// arr[] = {7,4,0,9}
// Output: 10
// Explanation: Water trapped by above 
// block of height 4 is 3 units and above 
// block of height 0 is 7 units. So, the 
// total unit of water trapped is 10 units.
 

// Example 3:

// Input:
// N = 3
// arr[] = {6,9,9}
// Output: 0
// Explanation: No water will be trapped.
 

// Your Task:
// You don'y need to read input or print anything. The task is to complete the function trappingWater() which takes arr and N as input parameters and returns the total amount of water that can be trapped.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

 

// Constraints:
// 3 <= N <= 107
// 0 <= Ai <= 108

//Brute Force Approach
//Trapping Rain water problem
//T(N)=O(N*N)  S=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
   for(int  i=0;i<n;i++){
    int left=a[i];
    for(int j=0;j<i;j++)
        left=max(left,a[j]);
    int right=a[i];
    for(int j=i;j<n;j++)
        right=max(right,a[j]);

      s=s+(min(left,right)-a[i]);
   }
    cout<<s<<endl;

return 0;}


// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int a[], int n){

    // Your code here
    int l[n],r[n];
    int ma,mi;
    ma=l[0]=a[0];
    mi=r[n-1]=a[n-1];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>ma) {
            ma=a[i];
        }
        l[i]=ma;
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]>mi) mi=a[i];
        r[i]=mi;
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=min(l[i],r[i])-a[i];
    }
    return s;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends

//T(n)=O(n)
//S=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int lo=0;
    int hi=n-1;
    int ma=0;
    int mi=0;
    int ans=0;
    while(lo<=hi){
      if(a[lo]<a[hi]){
        if(a[lo]>mi){
            mi=a[lo];
        }
        else{
            ans=ans+(mi-a[lo]);
        }
        lo++;
    }
    else{
        if(a[hi]>ma){
            ma=a[hi];
        }
        else{
            ans=ans+(ma-a[hi]);
        }
        hi--;
    }
    }
    cout<<ans<<endl;

return  0;}

