#include<bits/stdc++.h>
using namespace std;
int coinchange(int a[],int sum,int n){
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0 && j!=0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=j){
                t[i][j]=t[i-1][j]+t[i][j-a[i-1]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum;
    cin>>sum;
    cout<<coinchange(a,sum,n);

return 0;}
