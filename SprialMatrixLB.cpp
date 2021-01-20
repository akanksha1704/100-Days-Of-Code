
// Given a matrix of size R*C. Traverse the matrix in spiral form.

// Example 1:

// Input:
// R = 4, C = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {13, 14, 15,16}}
// Output: 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Explanation:

// Example 2:

// Input:
// R = 3, C = 4  
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12}}
// Output: 
// 1 2 3 4 8 12 11 10 9 5 6 7
// Explanation:
// Applying same technique as shown above, 
// output for the 2nd testcase will be 
// 1 2 3 4 8 12 11 10 9 5 6 7.

// Your Task:
// You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, R and C as input parameters and returns a list of integers denoting the spiral traversal of matrix. 

// Expected Time Complexity: O(R*C)
// Expected Auxiliary Space: O(R*C)

// Constraints:
// 2 <= R, C <= 100
// 0 <= matrixi <= 100


// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > a, int n, int m) 
    {
        // code here 
     vector<int>m1;
     int sr=0,sc=0;
    int er=n-1,ec=m-1;
    while(sr<=er && sc<=ec){
        //First Row
        for(int i=sc;i<=ec;i++){
            // cout<<a[sr][i]<<" ";
            m1.push_back(a[sr][i]);
        }
        sr++;
        //last column
        for(int i=sr;i<=er;i++){
            // cout<<a[i][ec]<<" ";
            m1.push_back(a[i][ec]);
        }
        ec--;
        //Bottom row
        if(er>=sr){
            for(int i=ec;i>=sc;i--){
                // cout<<a[er][i]<<" ";
                m1.push_back(a[er][i]);
            }
            er--;
        }
        //First Column
        if(ec>=sc){
            for(int i=er;i>=sr;i--){
                // cout<<a[i][sc]<<" ";
                m1.push_back(a[i][sc]);
            }
            sc++;
        }
    }
    return m1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
