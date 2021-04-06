//TC=O(N),S=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int i=0;
    while(i<n){
        if(a[i]!=a[a[i]-1]){
            swap(a[i],a[a[i]-1]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            cout<<"Missing Number:"<<i+1;
            cout<<"Duplicate Number:"<<a[i];
        }
    }

return 0;}
