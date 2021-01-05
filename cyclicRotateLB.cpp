//Write a program to cyclically rotate an array by one.
//T(N)=O(n),space=O(1)
#include<iostream>
using namespace std;
void cyclicRotate(int a[],int n){
    int i,q=a[n-1];
    for(i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[i]=q;
}
void print(int  a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
}
//void cyclicRotateDigit(int a[],int  d,int n){
  //  for(int i=0;i<d;i++)
    //    cyclicRotate(a,n);

//}

int main(){
    int n,d;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   // cin>>d;
    cyclicRotate(a,n);
    print(a,n);
return 0;}
