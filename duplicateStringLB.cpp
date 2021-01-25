//Find Duplicate characters in a string
//T(n)=O(1)
//Space=O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n=s.length();
    unordered_map<char,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    for(auto it:m){
        if(it.second>1){
            cout<<it.first<<" "<<"count= "<<it.second<<endl;
        }
    }


return 0;}
