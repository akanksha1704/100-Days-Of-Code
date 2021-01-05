//Find the Union and Intersection of the two sorted arrays.

#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int b[],int n,int m){
    int i=0,j=0,c1=0;
    while(i<n && j<m){
        if(a[i]<b[j])
            i++;
        else if(b[j]<a[i])
            j++;
        else
            {
            a[i++];
            j++;
            }
    }
    for(int k=0;k<n;k++){
        for(int q=k+1;q<n;q++){
            if(a[k]!=a[q])
                c1++;
        }
    }
      cout<<"Count2 is:"<<c1<<endl;

}
void unionArr(int a[],int b[],int n,int m){
    int i=0,j=0,c1=0;
    while(i<n && j<m){
    if(a[i]<b[j])
        {
            a[i++];

        }
    else if(b[j]<a[i]){
        b[j++];

    }
    else{
        b[j++];
        i++;

    }
    }

    while(i<n){
        a[i++];

    }
    while(j<m){
        a[j++];

    }
    for(int k=0;k<n;k++){
        for(int q=k+1;q<n;q++){
            if(a[k]!=a[q])
                c1++;
        }
    }
    cout<<"Count is"<<c1<<endl;

}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    unionArr(a,b,n,m);
    intersection(a,b,n,m);

return 0;}
