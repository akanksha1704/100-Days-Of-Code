//Rearrange the array in alternating positive and negative items with O(1) extra space
//T(n)=O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]<0 && a[j]>0){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(a[i]>0 && a[j]<0){
            i++;
            j--;

        }
        else if(a[i]>0){
            i++;
        }
        else if(a[j]<0){
            j--;
        }
    }
    if(i==0 || i==n){
        for(int m=0;m<n;m++)
            cout<<a[m]<<" ";
        cout<<endl;

    }
    else{
        int k=0;
        while(k<n && i<n){
            swap(a[k],a[i]);
            k=k+2;
            i++;
        }
        for(int m=0;m<n;m++)
            cout<<a[m]<<" ";
        cout<<endl;
    }
return 0;}
