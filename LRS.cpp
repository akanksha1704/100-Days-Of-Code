#include<bits/stdc++.h>
using namespace std;

int longestrepeatingsubsequence(string s,int n){
    string a,b;
    a=s;
    b=s;
    int t[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
            t[i][j]=0;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1]&&i!=j)
              t[i][j]=1+t[i-1][j-1];
            else
              t[i][j]=max(t[i][j-1],t[i-1][j]);
        }
    }
    return t[n][n];
}
int main(){
    
    string s;
    cin>>s;
    int n =s.size();
    cout<<longestrepeatingsubsequence(s,n);
    
}
