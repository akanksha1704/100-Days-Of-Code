// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


// Example 1:

// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.

// Example 2:

// Input:
// N = 4, X = 2
// arr[] = {1, 1, 1, 1}
// Output: 6
// Explanation: 
// Each 1 will produce sum 2 with any 1.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function getPairsCount() which takes arr[], n and k as input parameters and returns the number of pairs that have sum K.


// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// 1 <= K <= 108
// 1 <= Arr[i] <= 106

//Brute Force
//T(n)=O(n*n)
//Space=O(1)
#include<bits/stdc++.h>
using namespace std;
void getPairsCount(int arr[], int n, int k) {
        // code here
        int count1=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    count1++;
                }
            }
        }
        cout<<count1<<endl;
    }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //for(int i=0;i<n;i++)
      //  cout<<a[i]<<" ";
     int k;
     cin>>k;
     int coun;
    getPairsCount(a,n,k);

}

//T(n)=O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    int count1=0;
    map<int,int>m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    for(int i=0;i<n;i++){
        if(m[k-a[i]]>0){
            cout<<a[i]<<","<<k-a[i]<<endl;
            m[a[i]]=0;
            count1++;
        }
    }
    cout<<"Count is:"<<count1<<endl;
return 0;}

