
#include<bits/stdc++.h>
using namespace std;

int t[102][1002];
bool subsetsum(int a[],int n,int sum){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0 &&  j!=0){
                return false;
            }
            if(j==0){
                return true;
            }

        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=sum){
                t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];
            }
            else
                t[i][j]=t[i-1][j];
        }
    }

return  t[n][sum];

}

bool equalpartition(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    if(sum%2!=0)
        return false;
    else if(sum%2==0)
        subsetsum(a,n,sum/2);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
            cin>>a[i];
    int r;
    r=equalpartition(a,n);

    if(r==1){
        cout<<"true";
    }
    else
        cout<<"false";

return 0;}
