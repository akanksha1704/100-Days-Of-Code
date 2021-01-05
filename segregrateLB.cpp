//Segregate 0s and 1s in an array
//time:O(n)
#include<bits/stdc++.h>
using namespace std;
void segregate(int a[],int  n){
    int counts=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
            counts++;
    }
    for(int i=0;i<counts;i++)
        a[i]=0;
    for(int i=counts;i<n;i++)
        a[i]=1;
}
void print(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<",";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    segregate(a,n);
    print(a,n);

return  0;}

