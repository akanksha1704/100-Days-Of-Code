//Minimise the maximum difference between heights [V.IMP]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    int r;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=a[n-1]-a[0];
    int small=a[0]+k;
    int big=a[n-1]-k;

    if(small>big){
        swap(small,big);
    }
    for(int i=1;i<n-1;i++){
        int sub=a[i]-k;
        int add=a[i]+k;
        if((sub>=small)||(add<=big))
            continue;

        if(big-sub<=add-small){
            small=sub;
        }
        else{
            big=add;
        }

    }
    cout<<min(ans,big-small)<<endl;

return 0;}
