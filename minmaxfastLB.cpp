//Maximum and minimum of an array using minimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
void result(int a[],int n){
int minimum=0,maximum=0;
if(n==1){
    minimum=a[0];
    maximum=a[0];
}
if(a[0]>a[1]){
    maximum=a[0];
    minimum=a[1];
}
else{
    maximum=a[1];
    minimum=a[0];
}
for(int i=2;i<=n;i++){
    if(a[i]>maximum){
        maximum=a[i];

    }
    if(a[i]<minimum){
        minimum=a[i];
    }
}
cout<<"Max  ele is:"<<maximum<<endl;
cout<<"Min  ele is:"<<minimum<<endl;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

result(a,n);


return  0;}
