#include<bits/stdc++.h>
using namespace std;
int static t[101][101];
int lcs(string a,string b,int n,int m){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i][j-1],t[i-1][j]);
        }
    }
return t[n][m];
}
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int r=lcs(a,b,n,m);
    if(r==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


return 0;}
