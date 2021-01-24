//Rotate matrix by 90 degrees
//t(n)=O(r*c)
//space=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        int s=0;
        int e=n-1;
        while(s<e){
            swap(a[i][s],a[i][e]);
            s++;
            e--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;}
