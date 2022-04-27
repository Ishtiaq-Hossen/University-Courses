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
        root->data=tempData;//this char,caps,arrow
        root->next=NULL;
    }
    else{
        //R10 q20 30 
        Node *q=root; 
        while(q->next!=NULL){
            q=q->next;
        }
        Node *p=NULL;//
        p=new Node;
        p->data=tempData;
        p->next=NULL;
        q->next=p;//
    }
}
void addFront(Node *&root){
    int tempData;
    cin>>tempData;
    if(root == NULL){
        root=new Node;
        root->data=tempData;
        root->next=NULL;
    }
    else{
        Node *q=root;
        Node *p=NULL;
        p=new Node;
        p->data=tempData;
        p->next=q;
        root=p;
    }
}
void deleteSingleNode(Node *&root,int value){
    //5 R10 15 200 25
    Node *currentNode=root;
    Node *prev=root;
    while(currentNode!=NULL){
        if(currentNode->data==value){
            if(currentNode == root){
                root=root->next;
                delete currentNode;
                break;
            }
            else{ 
            prev->next=currentNode->next;
            delete currentNode;
            break;
            }
        }
        prev=currentNode;
        currentNode=currentNode->next;
    }



}
void display(Node *root){
    while(root!=NULL){
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;
}
int main(){
    Node *root=NULL;
    //R25 35 50
    addBack(root);
    addBack(root);
    addBack(root);
    addBack(root);
    addBack(root);
    display(root);
    deleteSingleNode(root,25);
    display(root);

    return 0;
}
//0 2
//0 1  2  3  4 5
//2 5 8  10 15 20
//removeall ()
//countDuplicates(Node *root,int value)// returns no of duplicates of a value
//removeDuplicates(Node *root,int value) //takes a ref to a linked list and a value and deletes the value along with duplicates
//count() returns total number of nodes
//addIndex(int index,int value);
//