//Recursive Approach
#include<bits/stdc++.h>
using namespace std;
int solve(string s,int i,int j,bool istrue){
    if(i>j)
        return false;
    if(i==j){
        if(istrue==true)
            return s[i]=='T';
        else
            return s[i]=='F';
    }

    int ans=0;
    for(int k=i+1;k<=j-1;k+=2){
        int lT=solve(s,i,k-1,true);
        int lF=solve(s,i,k-1,false);
        int rT=solve(s,k+1,j,true);
        int rF=solve(s,k+1,j,false);

        if(s[k]=='&'){
            if(istrue==true){
                ans=ans+lT*rT;
            }
            else
                ans=ans+lT*rF+lF*rT+lF*rF;
        }
        else if(s[k]=='|'){
            if(istrue==true){
                ans=ans+lT*rF+lF*rT+lT*rT;
            }
            else
                ans=ans+lF*rF;
        }
        else if(s[k]=='^'){
            if(istrue==true){
                ans=ans+lT*rF+lF*rT;
            }
            else
                ans=ans+lT*rT+lF*rF;
        }
    }
return ans;

}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<solve(s,0,n-1,true);


return 0;}

//Using Map
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>mp;

int solve(string s,int i,int j,bool istrue){
    if(i>j)
        return false;
    if(i==j){
        if(istrue==true)
            return s[i]=='T';
        else
            return s[i]=='F';
    }

    string temp=to_string(i);
    temp.append(" ");
    temp.append(to_string(j));
    temp.append(" ");
    temp.append(to_string(istrue));

    if(mp.find(temp)!=mp.end()){
        return mp[temp];
    }
int ans=0;
for(int k=i+1;k<=j-1;k+=2){
    int lT=solve(s,i,k-1,true);
    int lF=solve(s,i,k-1,false);
    int rT=solve(s,k+1,j,true);
    int rF=solve(s,k+1,j,false);

    if(s[k]=='&'){
        if(istrue==true)
            ans=ans+lT*rT;
        else
            ans=ans+lT*rF+lF*rT+lF*rF;
    }
    else if(s[k]=='|'){
        if(istrue==true)
            ans=ans+lT*rF+lF*rT+lT*rT;
        else
            ans=ans+lF*rF;
    }
    else if(s[k]=='^'){
        if(istrue==true)
            ans=ans+lT*rF+lF*rT;
        else
            ans=ans+lT*rT+lF*rF;
    }
}
return mp[temp]=ans;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    mp.clear();
    cout<<solve(s,0,n-1,true);


return 0;}

//Using Top-Down DP
#include<bits/stdc++.h>
using namespace std;

int static t[1001][1001][2];

int solve(string s,int i,int j,bool istrue){
    if(i>j)
        return false;
    if(i==j){
        if(istrue==true)
            return s[i]=='T';
        else
            return s[i]=='F';
    }

    if(t[i][j][istrue]!=-1){
        return t[i][j][istrue];
    }

int ans=0;
for(int k=i+1;k<=j-1;k+=2){
    int lT=solve(s,i,k-1,true);
    int lF=solve(s,i,k-1,false);
    int rT=solve(s,k+1,j,true);
    int rF=solve(s,k+1,j,false);

    if(s[k]=='&'){
        if(istrue==true)
            ans=ans+lT*rT;
        else
            ans=ans+lT*rF+lF*rT+lF*rF;
    }
    else if(s[k]=='|'){
        if(istrue==true)
            ans=ans+lT*rF+lF*rT+lT*rT;
        else
            ans=ans+lF*rF;
    }
    else if(s[k]=='^'){
        if(istrue==true)
            ans=ans+lT*rF+lF*rT;
        else
            ans=ans+lT*rT+lF*rF;
    }
}
return t[i][j][istrue]=ans;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    memset(t,-1,sizeof(t));
    cout<<solve(s,0,n-1,true);


return 0;}

