//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
struct Node{
    Node* left=NULL;
    int data;
    Node* right=NULL;
};
void insert(Node *&root,int val)
{
    if(root==NULL)
    {
        root=new Node;
        root->data=val;
        root->left=NULL;
        root->right=NULL;
        return;
    }
    if(root->data>val)insert(root->left,val);
    else if(root->data<val)insert(root->right,val);
}
void inorder(Node *root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(Node* root)
{
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void preorder(Node *root)
{
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void left_to_right(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    left_to_right(root->right);
    cout<<root->data<<" ";
    left_to_right(root->left);
}
int sum=0;
void leafnodesum(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    leafnodesum(root->left);
    if(root->left==NULL && root->right==NULL)
    {
        if(!(root->data%7))
        {
            sum+=root->data;
        }
        
    }
    leafnodesum(root->right);


}
int main()
{
    Node *root=new Node;
    root=NULL;
    insert(root,10);
    insert(root,5);
    insert(root,15);
    insert(root,7);
    insert(root,13);
   
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;

    left_to_right(root);
    leafnodesum(root);
    cout<<endl;
    cout<<"sum is: "<<sum<<endl;
    return 0;
}