
//left  rotate
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int a[],int n){
    int i,q=a[0];
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[i]=q;

}
void leftRotateDigit(int a[],int d,int n){
    for(int i=0;i<d;i++)
        leftRotate(a,n);

}
void  print(int a[],int n){
    for(int j=0;j<n;j++)
        cout<<a[j]<<",";
}
int main(){
    int n,d;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     cin>>d;
    leftRotateDigit(a,d,n);
    print(a,n);
return 0;}
