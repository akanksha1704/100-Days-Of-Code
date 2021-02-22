#include<bits/stdc++.h>
using namespace std;

int t[9][10];
int rodcutting(int len[],int price[],int C,int n){

    for(int i=0;i<n+1;i++){
        for(int j=0;j<C+1;j++){
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<C+1;j++){
            if(len[i-1]<=j){
            t[i][j]=max(price[i-1]+t[i][j-len[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

return t[n][C];
}

int main(){
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price) / sizeof(price[0]);
    int len[n];
    for (int i = 0; i < n; i++) {
        len[i] = i + 1;
    }
    int C = n;

    cout<<rodcutting(len,price,C,n);
return 0;}
