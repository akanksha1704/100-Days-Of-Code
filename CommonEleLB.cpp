// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// Note: can you take care of the duplicates without using any additional Data Structure?

// Example 1:

// Input:
// n1 = 6; A = {1, 5, 10, 20, 40, 80}
// n2 = 5; B = {6, 7, 20, 80, 100}
// n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
// Output: 20 80
// Explanation: 20 and 80 are the only
// common elements in A, B and C.
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function commonElements() which take the 3 arrays A[], B[], C[] and their respective sizes n1, n2 and n3 as inputs and returns an array containing the common element present in all the 3 arrays in sorted order. 
// If there are no such elements return an empty array. In this case the output will be printed as -1.

 

// Expected Time Complexity: O(n1 + n2 + n3)
// Expected Auxiliary Space: O(n1 + n2 + n3)

 

// Constraints:
// 1 <= n1, n2, n3 <= 10^5
// The array elements can be both positive or negative integers.

class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
           vector<int>v;
           unordered_map<int,int>m1,m2,m3;
           for(int i=0;i<n1;i++){
               m1[a[i]]++;
           }
           for(int i=0;i<n2;i++){
               m2[b[i]]++;
           }
           for(int i=0;i<n3;i++){
               m3[c[i]]++;
           }
           for(int i=0;i<n1;i++){
               if(m1[a[i]] && m2[a[i]] && m3[a[i]]){
                   v.push_back(a[i]);
                   m1[a[i]]=0;
               }
           }
           return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
} 


//T(n)=O(n1+n2+n3)
//Space=O(1)

  public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
           int i=0,j=0,k=0;
           vector<int> v;
           while(i<n1 && j<n2 && k<n3){
               if(a[i]==b[j] && b[j]==c[k]){
                   v.push_back(a[i]);
                   i++;
                   j++;
                   k++;
               }
               else if(a[i]<b[j])  i++;
               else if(b[j]<c[k])  j++;
               else k++;
               
               int  xx=a[i-1];
               while(a[i]==xx) i++;
               int  yy=b[j-1];
               while(b[j]==yy) j++;
               int zz=c[k-1];
               while(c[k]==zz) k++;
               
           }
           if(v.size()==0)  return {-1};
           
           return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
