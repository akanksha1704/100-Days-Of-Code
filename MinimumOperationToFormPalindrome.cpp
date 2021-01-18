//Minimum operation require to form a palindromic array you are only allowed to merge adjacent elements and replace with sum
//T(n)=O(n)
//Space=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=n-1,c=0;
    while(i<=j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else if(a[i]>a[j]){
            j--;
            a[j]=a[j]+a[j+1];
            c++;
        }
        else{
            i++;
            a[i]=a[i]+a[i-1];
            c++;
        }
    }
    cout<<c<<endl;

return 0;}
