#include<bits/stdc++.h>
using namespace std;

int coinchange(int coin[],int n,int sum){
    int t[n+1][sum+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=INT_MAX-1;
            }
            if(j==0&&i!=0){
                t[i][j]=0;
            }
        }
    }

for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
        if(j%coin[0]==0)
            t[i][j]=j/coin[0];
        else
            t[i][j]=INT_MAX-1;

}
}

for(int i=2;i<n+1;i++){
    for(int j=2;j<sum+1;j++){
        if(coin[i-1]<=j){
            t[i][j]=min(t[i-1][j],1+t[i][j-coin[i-1]]);
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
    int sum,r;
    cin>>sum;
    r=coinchange(a,n,sum);
    cout<<"minimum coins are:"<<r;
return 0;}
