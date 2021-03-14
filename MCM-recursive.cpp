#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int i,int j){
    int mini=INT_MAX,k,temp_ans;
    if(i>=j)
        return 0;
    for(k=i;k<=j-1;k++){
        temp_ans=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        if(temp_ans<mini)
            mini=temp_ans;
    }

   return mini;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<solve(arr,1,n-1);

return 0;}
