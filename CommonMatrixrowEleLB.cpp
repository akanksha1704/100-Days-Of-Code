//Common elements in all rows of a given matrix
//T(n)=O(m*n)
//Space=O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    unordered_map<int,int>m1;
    //initalize first row value with 1
    for(int i=0;i<m;i++)
        m1[a[0][i]]=1;

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(m1[a[i][j]]==i)
            {
                m1[a[i][j]]=i+1;
                //if last row
                if(i==n-1)
                    cout<<a[i][j]<<"  ";
            }
        }
    }

return 0;
}
