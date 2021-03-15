//Recursive-Approach

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int solve(string s,int i,int j){
    if(i>=j)
        return 0;

    if(isPalindrome(s,i,j)==true)
        return 0;

    int mini=INT_MAX;

    for(int k=i;k<=j-1;k++){

        int temp=1+solve(s,i,k)+solve(s,k+1,j);

        if(temp<mini)
            mini=temp;
    }
return mini;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<solve(s,0,n-1);

return 0;}


//TopDown-DP
#include<bits/stdc++.h>
using namespace std;
int static t[1001][1001];
bool isPalindrome(string s,int i,int j){
    if(i==j)
        return true;
    if(i>j)
        return true;
    while(i<j){
        if(s[i]!=s[j])
            return false;
       i++;
       j--;
    }
return true;
}


int solve(string s,int i,int j){
    if(i>=j)
        return 0;

    if(isPalindrome(s,i,j)==true)
        return 0;

    if(t[i][j]!=-1)
        return t[i][j];

    int left,right;
    int mini=INT_MAX;

    for(int k=i;k<=j-1;k++){

        if(t[i][k]!=-1)
            left= t[i][k];
        else{
            left=solve(s,i,k);
            t[i][k]=left;
        }

        if(t[k+1][j]!=-1)
                right=t[k+1][j];
        else{
            right=solve(s,k+1,j);
            t[k+1][j]=right;
        }

        int temp=1+left+right;
        if(temp<mini)
            mini=temp;
    }

return t[i][j]=mini;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    memset(t,-1,sizeof(t));
    cout<<solve(s,0,n-1);

return 0;}
