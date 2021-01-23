//Largest rectangle in histogram
//T(n)=O(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    int left[n],right[n];

    stack<int>mystack;
    //Fill left
    for(int i=0;i<n;i++){
        if(mystack.empty()){
            left[i]=0;
            mystack.push(i);
        }
        else{
            while(!mystack.empty() && height[mystack.top()]>=height[i])
                mystack.pop();
            left[i]=mystack.empty() ? 0:mystack.top()+1;
            mystack.push(i);
        }
    }

    //clear stack
    while(!mystack.empty())
        mystack.pop();

    //fill right
    for(int i=n-1;i>=0;i--){
        if(mystack.empty()){
            right[i]=n-1;
            mystack.push(i);
        }
        else{
            while(!mystack.empty() && height[mystack.top()]>=height[i])
                mystack.pop();

            right[i]=mystack.empty() ? n-1:mystack.top()-1;
            mystack.push(i);
        }
    }

    //finding max area
   int max_area=0;
    for(int i=0;i<n;i++){
        max_area=max(max_area,height[i]*(right[i]-left[i]+1));
    }
    cout<<"Maximum area is:"<<max_area<<endl;





return 0;}
