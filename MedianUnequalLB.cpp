//Median of 2 sorted arrays of different size
//T(n)=O(log(min(m,n)))
//Space=O(1)
#include<bits/stdc++.h>
using namespace std;
int getMedian(int a[],int b[],int n,int m){
        int begin1=0;
        int end1=n;
        while(begin1<=end1){
            int i1=(begin1+end1)/2;
            int i2=(n+m+1)/2-i1;

            int min1=(i1==n) ? INT_MAX : a[i1];
            int max1=(i1==0) ? INT_MIN : a[i1-1];

            int min2=(i2==m) ? INT_MAX : b[i2];
            int max2=(i2==0) ? INT_MIN : b[i2-1];

            if((max1<=min2) && (max2<=min1)){
                if((n+m)%2==0){
                    return ((double) (max(max1,max2)+min(min1,min2))/2);

                }
                else{
                    return ((double) (max(max1,max2)));
                }

            }
        else if(max1>min2)
            end1=i1-1;
        else{
            begin1=i1+1;
        }
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

        cout<<"Median is"<<getMedian(a,b,n1,n2);


return 0;}
