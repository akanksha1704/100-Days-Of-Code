//Find the maximum and minimum element in an array

//the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case.
//In the above implementation, the worst case occurs when elements are sorted in descending order and the best case occurs when elements are sorted in ascending order.
//Time Complexity:O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int maximum=INT_MIN;
int minimum=INT_MAX;
for(int i=0;i<n;i++){
    if(a[i]>maximum){
        maximum=a[i];
    }
    if(a[i]<minimum){
        minimum=a[i];
    }
}
cout<<"Maximum element is:"<<maximum;
cout<<"Minimum element is:"<<minimum;


return  0;
}


//ANOTHER APPROACH FASTERWAY
//Minimum and maximum of all array elements with minimum  number of comparisions.

//Total number of comparisons: Different for even and odd n, see below:

     //If n is odd:    3*(n-1)/2 : T(n) = T(floor(n/2)) + T(ceil(n/2)) + 2
                        //T(2) = 1
                        //T(1) = 0
    // If n is even:   1 Initial comparison for initializing min and max,
    //                       and 3(n-2)/2 comparisons for rest of the elements
    //                  =  1 + 3*(n-2)/2 = 3n/2 -2
    //Time complexity=O(n)
#include<bits/stdc++.h>
using namespace std;
struct  pairUp{

    int maxi;
    int mini;

};

struct pairUp getMinMax(int a[],int n){
    struct pairUp m;
    int i;

    if(n%2==0){
        if(a[0]>a[1]){
            m.maxi=a[0];
            m.mini=a[1];
            }
        else{
            m.maxi=a[1];
            m.mini=a[0];
            }
            i=2;
    }
    else{
        m.maxi=a[0];
        m.mini=a[0];
        i=1;
    }

    while(i<n-1){
        if(a[i]>a[i+1]){
            if(a[i]>m.maxi){
                m.maxi=a[i];}
            if(a[i+1]<m.mini)
                m.mini=a[i+1];
        }
        else{
            if(a[i+1]>m.maxi)
                m.maxi=a[i+1];
            if(a[i]<m.mini)
                m.mini=a[i];
        }
        i=i+2;
    }
    return m;

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pairUp m=getMinMax(a,n);
    cout<<"Minimum element"<<m.mini<<endl;
    cout<<"Maximum element"<<m.maxi<<endl;
return 0;
}
