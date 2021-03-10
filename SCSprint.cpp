#include<bits/stdc++.h>
using namespace std;

int static t[202][202];
int lcs(string a,string b,int n,int m){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }

return t[n][m];
}

string scsPrint(string a,string b,int n,int m){
    int i=n,j=m;
    string s="";

    while(i>0&&j>0){
        if(a[i-1]==b[j-1]){
            s.push_back(a[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j]){
                s.push_back(b[j-1]);
                j--;
            }
            else {
                s.push_back(a[i-1]);
                i--;
            }
        }
    }
    while(i>0){
        s.push_back(a[i-1]);
        i--;
    }
    while(j>0){
        s.push_back(b[j-1]);
        j--;
    }
    reverse(s.begin(),s.end());
return s;
}
int main(){
    string  a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    lcs(a,b,n,m);
    cout<<scsPrint(a,b,n,m);

return 0;}
