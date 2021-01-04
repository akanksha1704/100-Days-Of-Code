
//Find the "Kth" max and min element of an array
//time:O(nlogn)

#include<bits/stdc++.h>
using namespace std;
int kthSmall(int a[],int n,int k){
    sort(a,a+n);
    return a[k-1];
}
int main(){
int n,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>k;
cout<<"smallest num is"<<kthSmall(a,n,k);

return 0;}

