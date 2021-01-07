
// Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.


// Example 1:

// Input:
// N = 4, M = 5
// arr1[] = {1, 3, 5, 7}
// arr2[] = {0, 2, 6, 8, 9}
// Output: 0 1 2 3 5 6 7 8 9
// Explanation: Since you can't use any 
// extra space, modify the given arrays
// to form 
// arr1[] = {0, 1, 2, 3}
// arr2[] = {5, 6, 7, 8, 9}

// Example 2:

// Input:
// N = 2, M = 3
// arr1[] = {10, 12}
// arr2[] = {5, 18, 20}
// Output: 5 10 12 18 20
// Explanation: Since you can't use any
// extra space, modify the given arrays
// to form 
// arr1[] = {5, 10}
// arr2[] = {12, 18, 20}
 

// Your Task:
// You don't need to read input or print anything. Complete the function merge() which takes the two arrays arr1[], arr2[] and their sizes n and m, as input parameters. The function does not return anything. Use the given arrays to sort and merge arr1[] and arr2[] in-place. 
// Note: The generated output will print all the elements of arr1[] followed by all the elements of arr[2].

// Expected Time Complexity: O((n+m)*log(n+m))
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 <= N, M <= 5*104
// 0 <= arr1i, arr2i <= 106


//T(n)=O((n+m)*log(n+m))
//Space:O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }

    int i=n-1;
    int j=0;
    while(i>=0&&j<m){
        if(a1[i]>=a2[j]){
            swap(a1[i],a2[j]);
        }
        i--;
        j++;
    }
    sort(a1,a1+n);
    sort(a2,a2+m);

    for(int i=0;i<n;i++){
        cout<<a1[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<m;i++)
        cout<<a2[i]<<"  ";
return  0;}



//T(n)=O(n*m)
//Space=O(1)
//Merge sort of 2 sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    for(int i=0;i<m;i++)
        cin>>a2[i];

    for(int i=m-1;i>=0;i--){
            int last=a1[n-1];
            int j;
            for(j=n-2;j>=0&&a1[j]>a2[i];j--){
                a1[j+1]=a1[j];
            }
            //here we are checking if there is atleast one element greater than a2 value
            if(j!=n-2 || last>a2[i]){
                a1[j+1]=a2[i];
                a2[i]=last;
            }

        }

    for(int i=0;i<n;i++)
        cout<<a1[i]<<" ";

    cout<<endl;

    for(int i=0;i<m;i++)
        cout<<a2[i]<<"  ";


return 0;}
