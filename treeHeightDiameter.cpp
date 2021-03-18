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

int height(node *root){
    if(root==NULL)
      return 0;
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}

int diameter(node *root){
    if(root==NULL)
      return 0;
    
    int l=diameter(root->left);
    int r=diameter(root->right);
    
    int op1=height(root->left)+height(root->right);
    int op2=l;
    int op3=r;
    
    return max(op1,max(op2,op3));  
}
int main(){
    node*root =new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    int res=INT_MIN;
    cout<<height(root)<<endl;
    cout<<diameter(root);
 
}
