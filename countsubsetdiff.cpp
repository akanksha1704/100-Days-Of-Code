#include<bits/stdc++.h>
using namespace std;

int countsubsetsum(int a[],int n,int sum){
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(t[i-1][j]<=sum){
                t[i][j]=t[i-1][j]+t[i-1][j-a[i]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

return t[n][sum];
}

int countdiff(int a[],int n,int diff){
    int sum;
    int val=0;
    for(int i=0;i<n;i++)
        val=val+a[i];
    sum=(diff+val)/2;
    return countsubsetsum(a,n,sum);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int diff;
    cin>>diff;
    cout<<countdiff(a,n,diff);

return 0;}
