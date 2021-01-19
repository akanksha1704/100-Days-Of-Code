//Median of 2 sorted arrays of equal size
//T(n)=O(log n)
//Space=O(1)
#include<bits/stdc++.h>
using namespace std;

int median(int arr[],int n){

    if(n%2==0){
        return ((arr[n/2]+arr[n/2-1])/2);
    }
    else{
        return arr[n/2];
    }
}

int getMedian(int a[],int b[],int n){
    if(n<=0)
        return -1;
    if(n==1)
        return (a[0]+b[0])/2;

    if(n==2)
        return (max(a[0],b[0])+min(a[1],b[1]))/2;

    int m1=median(a,n);
    int m2=median(b,n);

    if(m1==m2){
        return m1;
    }
    if(m1<m2){
        if(n%2==0)
            return getMedian(a+n/2-1,b,n-n/2+1);

        return getMedian(a+n/2,b,n-n/2);
    }

    if(m2<m1){
        if(n%2==0)
            return getMedian(b+n/2-1,a,n-n/2+1);

        return getMedian(b+n/2,a,n-n/2);
    }


}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];
    if(n1==n2){
        cout<<"Median is"<<getMedian(a,b,n1);
    }
    else{
        cout<<"Median doesn't work for unequal case";
    }
return 0;}
