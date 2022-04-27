#include<iostream>
using namespace std;
struct Node{
    Node *lChild;
    int data;
    Node *rChild;
};
//50
Node * insertNode(Node *&root,int value){
    if(root==NULL){
        root=new Node;
        root->lChild=NULL;
        root->rChild=NULL;
        root->data=value;

    }
    else{
        if(root->data>value){
            insertNode(root->lChild,value);
        }
        else {
            insertNode(root->rChild,value);
        }
    }
    return root;
}


void postorder(Node* root)
{
    if (root == NULL)
        return;
    postorder(root->lChild);
    postorder(root->rChild);
    cout << root->data << " ";
    
}
Node * findLeftSuc(Node *root){
    while(root != NULL && root->rChild!=NULL){
        root=root->rChild;
    }
    return root;
}
Node * deleteNode(Node *&root,int value){
     if(root->data>value)
     {
        root->lChild = deleteNode(root->lChild,value);
     }
     else if(root->data<value) {
           root->rChild = deleteNode(root->rChild,value);
     }
     else
     {
        if(root->lChild==NULL && root->rChild==NULL)
        {
           // delete
               return NULL;
        }
        else if(root->lChild == NULL)
        {
            Node *p = root->rChild;
            delete root;
            return p;
        }
        else if(root->rChild == NULL)
        {
            Node *p = root->lChild;
            delete root;
            return p;
        }

            Node *p = findLeftSuc(root->lChild);
            root->data=p->data;
            root->lChild=deleteNode(root->lChild,p->data);

    }
        return root;

}
int main(){
    Node *root=nullptr;
    int value;
    cin>>value;
    root=insertNode(root,value);
    cin>>value;
    root=insertNode(root,value);
    cin>>value;
    root=insertNode(root,value);
    cin>>value;
    root=insertNode(root,value);
    cin>>value;
    root=insertNode(root,value);
    cin>>value;
    root=insertNode(root,value);

    postorder(root);
    
    cin>>value;
    deleteNode(root,value);

    postorder(root);
    return 0;
}
/* 
findLeftSuc(Node *root){
    while(root != NULL && root->rChild!=NULL){
        root=root->rChild;
    }
    return root;
}
 */
/* 
        if(root->data>value){
           root->left = insertNode(root->lChild,value);
        }
        else if(root->data<value) {
           root->right = insertNode(root->rChild,value);
        }
        else{
            if(root->lChild==NULL && root->rChild==NULL){
               // delete
               return NULL;
            }
            else if(root->lChild == NULL){
                //go to last and delete one
                Node *p = root->rChild;
                delete root;
                return p;
            }
            else if(root->rChild == NULL){
                //go to last and delete one
                Node *p = root->lChild
                delte root;
                return p;
            }

            Node *p = findLeftSuc(root->lChild);
            root->data=p->data;
            root->lChild=delete(root->left,p->data);

        }
        return root;



 */