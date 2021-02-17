#include<bits/stdc++.h>
using namespace std;


int subsetdiff(int a[],int n){
      int range=0;
    for(int i=0;i<n;i++)
        range=range+a[i];

    bool t[n+1][range+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<range+1;j++)
        {
            if(i==0)
                t[i][j]=false;
            else if(j==0)
                t[i][j]=true;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<range+1;j++){
            if(t[i-1][j]<=range){
                t[i][j]=t[i-1][j-a[i-1]] || t[i-1][j];
            }
            else
                t[i][j]=t[i-1][j];
        }
    }

    int diff=INT_MAX;
    for(int i=0;i<=range/2;i++){
        int s1=i;
        int s2=range-i;
        if(t[n][i]==true && diff>abs(s1-s2)){
            diff=abs(s1-s2);
        }
    }
    return diff;

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];


    cout<<subsetdiff(a,n);
return 0;}
