//T(n)=n*n;
//space=O(1)
//Brute force

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
                c++;
        }
    }
    cout<<"Count is:"<<c<<endl;

return 0;}
