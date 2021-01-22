// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

// Example 1:

// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

// Example 2:

// Input: 
// N = 2, M = 2
// Arr[][] = {{0, 0}, {1, 1}}
// Output: 1
// Explanation: Row 1 contains 2 1's (0-based
// indexing).

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function rowWithMax1s() which takes the array of booleans arr[][], n and m as input parameters and returns the 0-based index of the first row that has the most number of 1s. If no such row exists, return -1.
 

// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ N, M ≤ 103
// 0 ≤ Arr[i][j] ≤ 1 

 

//Find row with maximum no. of 1's
//T(n)=O(n*m)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        }
        int max1=-1,row=-1;
        int c=0,i=0,j=0;

        for( i=0;i<n;i++){
            for( j=0;j<m;j++){
                if(a[i][j]==1)
                    c++;
            }
            if(c>max1){
                max1=c;
                row=i;}
        }
        cout<<row<<endl;
return 0;
}

//T(n)=O(n+m)
//Space=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x,i,j;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

   j=m-1;
   while(j>=0 && a[0][j]==1)
        j--;

   int row=0;
   for(int i=1;i<n;i++){
    while(j>=0 && a[i][j]==1){
        j--;
        row=i;
    }
   }
   cout<<row;
return 0;}
