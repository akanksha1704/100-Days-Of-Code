//Count of number of given string in 2D character array
#include<bits/stdc++.h>
using namespace std;
int solve(int i,int j,string s,char ch[6][6],int size1,int idx){
    int found=0,temp;
    if(i>=0&&j>=0&&i<6&&j<6&&s[idx]==ch[i][j]){
        temp=s[idx];
        ch[i][j]=0;
        idx+=1;
        if(idx==size1){
            found=1;
        }

    else{
        found+=solve(i+1,j,s,ch,size1,idx);
        found+=solve(i-1,j,s,ch,size1,idx);
        found+=solve(i,j+1,s,ch,size1,idx);
        found+=solve(i,j-1,s,ch,size1,idx);
    }
    ch[i][j]=temp;
}
return found;
}

int main(){
    string s;
    s="GEEKS";
    char ch[6][6]={
            {'D','D','D','G','D','D'},
            {'B','B','D','E','B','S'},
            {'B','S','K','E','B','K'},
            {'D','D','D','D','D','E'},
            {'D','D','D','D','D','E'},
            {'D','D','D','D','D','G'}
           };
    int ans=0;
    int size1=5;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            ans+=solve(i,j,s,ch,size1,0);
        }
    }
    cout<<ans;
return 0;}
