//T=O(n)
//Space=O(1)
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    int gcd(int a,int b){
        if(b==0)
            return a;
        else 
            return gcd(b,a%b);
    }
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int k, int n){
        // code here
        int i,j,temp;
        int d=-1;
        for(i=0;i<gcd(n,k);i++){
            temp=arr[i];
            j=i;
            while(1){
                d=(j+k)%n;
                if(d==i)
                    break;
                arr[j]=arr[d];
                j=d;
            }
            arr[j]=temp;
        }
       
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends
