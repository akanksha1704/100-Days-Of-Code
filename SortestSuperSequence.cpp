
#include<bits/stdc++.h>
using namespace std;

int static t[101][101];
int lcs(string a,string b,int m,int n){

    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1])
                t[i][j]=1+t[i-1][j-1];

            else
            {
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
return t[m][n];

}
int sortestSupersequence(string a,string b,int m,int n){
   int z=lcs(a,b,m,n);
    int r=m+n;

    return r-z;
}
int main(){
    string a,b;
    cin>>a>>b;
    int m=a.size();
    int n=b.size();
    lcs(a,b,m,n);
    cout<<sortestSupersequence(a,b,m,n);


return 0;}
