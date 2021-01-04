
//find Largest sum contiguous Subarray [V. IMP]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int cs=0,ms=INT_MIN;
    for(int i=0;i<n;i++){

        cs=cs+a[i];
        if(ms<cs)
            ms=cs;
        if(cs<0)
            cs=0;
    }
    cout<<ms<<endl;

return 0; }
