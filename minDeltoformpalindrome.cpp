#include<bits/stdc++.h>
using namespace std;

int lps(string a,int m){
    string b=" ";
    int r=m;
    while(r>=0){
        b.push_back(a[r]);
        r--;
    }
    int n=b.size();
    int t[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
return t[m][n];

}
int minimumDeletion(string a,int m){
    int z=lps(a,m);
    int y=m-z;
    return y;
}
int main(){
    string  a;
    cin>>a;
    int m=a.size();
    cout<<minimumDeletion(a,m);
return 0;}

