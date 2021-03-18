#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*left;
    node*right;
    
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

int solve(node*root,int&res){
    
    if(root==NULL)
      return 0;
    
    int l=solve(root->left,res);
    int r=solve(root->right,res);
    
    int temp=max(max(l,r)+root->data,root->data);
    int ans=max(temp,l+r+root->data);
    res=max(res,ans);
    return temp;
}
int main(){
    node*root =new node(-10);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left=new node(15);
    root->right->right=new node(7);
    int res=INT_MIN;
    solve(root,res);
    cout<<res;
 
}
