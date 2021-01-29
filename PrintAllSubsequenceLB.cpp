//Print all Subsequences of a string.
//T(n)=O(2^n)

#include<bits/stdc++.h>
using namespace std;

void func(string t,int i,int n,string s){
    if(i==n){
        cout<<t<<endl;
    }
    else{
        //exclude the char
        func(t,i+1,n,s);
        //add in empty string
        t=t+s[i];
        //include the character
        func(t,i+1,n,s);
    }

}

int main(){
    string s;
    cin>>s;
    func("",0,s.length(),s);


return 0;}
