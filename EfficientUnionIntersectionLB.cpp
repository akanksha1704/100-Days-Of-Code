//Union and intersection of unsorted arrays
//T(n)=O(n+m)
//Set is  sorted  and  eliminates  duplicates
#include<bits/stdc++.h>
using namespace std;
void unionArr(int a1[],int a2[],int n,int m){
        set<int>hs;

        for(int i=0;i<n;i++){
            hs.insert(a1[i]);
        }
        for(int i=0;i<m;i++){
            hs.insert(a2[i]);
        }
        for(auto it=hs.begin();it!=hs.end();it++){
            cout<<*it<<",";
        }
        cout<<endl;

}

void intersection(int a1[],int a2[],int n,int m){
    set<int>hs;

    for(int i=0;i<n;i++){
        hs.insert(a1[i]);
    }

    for(int i=0;i<m;i++){

        if(hs.find(a2[i])!=hs.end()){
            cout<<a2[i]<<",";
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    for(int j=0;j<m;j++)
        cin>>a2[j];

    // Function call
    unionArr(a1,a2,n,m);
    intersection(a1,a2,n,m);

return  0;}
