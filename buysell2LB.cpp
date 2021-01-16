//Maximum profit by buying and selling a share atmost twice
//T(n)=O(n)
//s=O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=0;
    int ma=a[n-1];
    int mi=a[0];
    for(int i=n-2;i>=0;i--){
        if(a[i]>ma)
            ma=a[i];
        dp[i]=max(dp[i+1],ma-a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i]<mi)
            mi=a[i];
        dp[i]=max(dp[i-1],dp[i]+(a[i]-mi));
    }
    cout<<dp[n-1]<<endl;


return 0;}


//t(n)=O(n)
//s=O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int b1,b2,p1,p2;
        b1=b2=INT_MAX;
        p1=p2=0;
        for(int i=0;i<n;i++){
            b1=min(b1,a[i]);

            p1=max(p1,a[i]-b1);

            b2=min(b2,a[i]-p1);

            p2=max(p2,a[i]-b2);
        }

        cout<<p2<<endl;
return  0;}
