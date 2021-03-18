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
    
    int temp=max(l,r)+root->data;
    int ans=max(temp,l+r+root->data);
    res=max(res,ans);
    return temp;
}
int main(){
    node*root =new node(-15);
  root->left = new node(5);
    root->right = new node(6);
    root->left->left = new node(-8);
    root->left->right = new node(1);
    root->left->left->left = new node(2);
    root->left->left->right = new node(6);
    root->right->left = new node(3);
    root->right->right = new node(9);
    root->right->right->right= new node(0);
    root->right->right->right->left= new node(4);
    root->right->right->right->right= new node(-1);
    root->right->right->right->right->left= new node(10);
    int res=INT_MIN;
    solve(root,res);
    cout<<res;
 
}
