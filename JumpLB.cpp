//Minimum no. of Jumps to reach end of an array
//O(n*n)
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int dp[n];
  for(int i=0;i<n;i++)
    dp[i]=INT_MAX;

  dp[0]=0;

  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
            //In this condition we are checking if there is any possibility to reach ith position from j
        if(dp[j]!=INT_MAX && a[j]+j>=i){
            //As in dp[j] value stored is minimum way to reach it from starting and we have already checked that reaching ith position
            //is possible from j so here we doing +1 to check if in one go it is possible to reach that position.
            if(dp[j]+1<dp[i]){
                dp[i]=dp[j]+1;
            }
        }
    }
  }
  if(dp[n-1]!=INT_MAX){
    cout<<dp[n-1]<<endl;
  }
  else{
    cout<<"-1"<<endl;
  }

return 0;}
