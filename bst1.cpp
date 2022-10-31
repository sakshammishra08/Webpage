#include<bits/stdc++.h>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right; 

};


void inorder(TreeNode* &root)
{
    if(root==NULL){ return;}

    inorder(root->left);
    cout<<root->val<< " ";
    inorder(root->right);
}

TreeNode* insert(TreeNode* &root, int value)
{
    if(root==NULL)
    {
        TreeNode* newNode = new TreeNode();
        newNode->val = value;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    if(value>root->val)
    {
        root->right = insert(root->right, value);
    }
    else if(value>root->val)
    {
        root->left = insert(root->left, value);
    }
return root;

}

int main()
{
 TreeNode* root=NULL;
 root = insert(root,10);
 insert(root,20);
  insert(root,60);
   insert(root,30);
    insert(root,170);
     insert(root,70);
 inorder(root);

}