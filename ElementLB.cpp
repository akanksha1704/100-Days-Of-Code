//Given an array of size n and a number k, fin all elements that appear more than " n/k " times.
//T(n)=O(n)
//Space=O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    set<int>v;
    int r;
    r=n/k;
    for(int i=0;i<n;i++){
        if(a[i]>=r ){
            v.insert(a[i]);
        }
    }
      for (auto it = v.begin(); it !=
                             v.end(); ++it)
        cout << ' ' << *it;

return 0;}
