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
    leafnodesum(root->right);
    if(root->left==NULL && root->right==NULL)
    {
        if(!(root->data%3))
        {
            sum+=root->data;
        }
        
    }
    leafnodesum(root->left);

}
int main()
{
    Node *root=new Node;
    root=NULL;
    insert(root,5);
    insert(root,2);
    insert(root,12);
    insert(root,1);
    insert(root,3);
    insert(root,9);
    insert(root,21);
    insert(root,19);
    insert(root,25);
    cout<<"Print left to right node: ";
    left_to_right(root);
    cout<<endl;
    leafnodesum(root);
    cout<<"sum of leaf node which is divisible by 3: "<<sum<<endl;
    return 0;
}