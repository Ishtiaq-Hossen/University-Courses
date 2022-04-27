#include<iostream>
using namespace std;

//Node
struct Node{
   int data;
   Node *next;
};
void addBack(Node *&root)//|d:10|N| 
{
    //10 20 30 40p 
    int tempData;
    cin>>tempData;//40
    if(root == NULL){
        root = new Node;
        root->data=tempData;
        root->next=NULL;
    }
    else{
        Node *q=root; 
        while(q->next!=NULL){
            q=q->next;
        }
        Node *p=NULL;
        p=new Node;
        p->data=tempData;
        p->next=NULL;
        q->next=p;
    }
}
void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    Node *root=NULL;

    addBack(root);
    addBack(root);
    addBack(root);
    addBack(root);

    display(root);

    return 0;
}