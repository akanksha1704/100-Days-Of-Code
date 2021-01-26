#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;

    string temp;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2){
        cout<<"no";
    }
    else {
        temp=s1+s1;
        if(temp.find(s2)!=string::npos){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
return 0;}

