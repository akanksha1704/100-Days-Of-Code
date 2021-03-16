//recursive
#include<bits/stdc++.h>
using namespace std;

bool solve(string a,string b){
    if(a.compare(b)==0)
        return true;
    if(a.length()<=1)
        return false;
    int n=a.length();
    bool flag=false;
    for(int i=1;i<=n-1;i++){
        if((solve(a.substr(0,i),b.substr(n-i,i))==true)&&(solve(a.substr(i,n-i),b.substr(0,n-i))==true) ||
        (solve(a.substr(0,i),b.substr(0,i))==true)&&(solve(a.substr(i,n-i),b.substr(i,n-i))==true)){
            flag=true;
            break;
        }
    }
return flag;
}
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    if(n!=m)
        cout<<"false";
    if(n==0&&m==0)
        cout<<"true";
    int r=solve(a,b);
    if(r==1)
        cout<<"true";
    else
        cout<<"false";

return 0;}

//dp
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,bool>mp;

bool solve(string a,string b){
    if(a.compare(b)==0)
        return true;
    if(a.length()<=1)
        return false;
    string key=a;
    key.append(" ");
    key.append(b);
    if(mp.find(key)!=mp.end())
        return mp[key];
    int n=a.length();
    bool flag=false;
    for(int i=1;i<=n-1;i++){
        if((solve(a.substr(0,i),b.substr(n-i,i))==true)&&(solve(a.substr(i,n-i),b.substr(0,n-i))==true) ||
        (solve(a.substr(0,i),b.substr(0,i))==true)&&(solve(a.substr(i,n-i),b.substr(i,n-i))==true)){
        flag=true;
        break;
        }

    }
return mp[key]=flag;
}
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    if(n!=m)
        cout<<"false";
    if(n==0&&m==0)
        cout<<"true";
    int r=solve(a,b);
    if(r==1)
        cout<<"true";
    else
        cout<<"false";
return 0;}
