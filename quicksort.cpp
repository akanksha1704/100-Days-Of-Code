#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
    int pivot=a[e];
    int i=(s-1);
    for(int j=s;j<=e-1;j++){
        if(a[j]<pivot){
            i++;
           swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return (i+1);
}

void  quickSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(a,s,e);
        quickSort(a,s,p-1);
        quickSort(a,p+1,e);

}
void print(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=0,e=n-1;
    quickSort(a,s,e);
    print(a,n);


return 0;}
