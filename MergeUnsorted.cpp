//t(n)=O(n+m)=space complexity

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    int p=n+m;
    int a3[p];
   int  i=0,j=0,k=0;
   while(i<n && j<m){
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
   }
    while (i < n)
        a3[k++] = a1[i++];

    // Store remaining elements of second array
    while (j < m)
        a3[k++] = a2[j++];
      sort(a3,a3+p);
     for(int i=0;i<p;i++){
        cout<<a3[i]<<"  ";
     }
return 0;}


//t(n)=O(n+m)=space complexity

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    int p=n+m;
    int a3[p];
   int  i=0,j=0,k=0;
   while(i<n && j<m){
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
   }
    while (i < n)
        a3[k++] = a1[i++];

    // Store remaining elements of second array
    while (j < m)
        a3[k++] = a2[j++];
      sort(a3,a3+p);
     for(int i=0;i<p;i++){
        cout<<a3[i]<<"  ";
     }
return 0;}





//T(n)=O(n)
//Space=O(n)
#include<iostream>
#include<map>
using namespace std;
int main(){
     int n,m;
    cin>>n>>m;
    map<int,bool>mp;
    int a1[n],a2[m];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    for(int i=0;i<m;i++)
        cin>>a2[i];
    for(int i=0;i<n;i++)
        mp[a1[i]]=true;
    for(int i=0;i<m;i++)
        mp[a2[i]]=true;
    for(auto i:mp)
        cout<<i.first<<" ";

return  0;}

