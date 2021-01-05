//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
//problems are variation of famous Dutch national flag problem.:Dijisktra's Algo
#include<bits/stdc++.h>
using namespace std;
void sortAcc(int a[],int n){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sortAcc(a,n);

return  0;}
