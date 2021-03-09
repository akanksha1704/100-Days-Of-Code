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

string lcsPrint(string a,string b,int m,int n){

    int i=m,j=n;
    string s=" ";
    while(i>0&&j>0){
        if(a[i-1]==b[j-1]){
            s.push_back(a[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j])
                j--;
            else
                i--;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string a,b;
    cin>>a>>b;
    int m=a.size();
    int n=b.size();
    cout<<lcs(a,b,m,n)<<endl;
    cout<<lcsPrint(a,b,m,n)<<endl;

return 0;}
