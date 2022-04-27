#include<iostream>
using namespace std;
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
void display(Node *root){
    while(root!=NULL){
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;
}
void margeList(Node *&list1, Node *&list2){
    Node *p=list1;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=list2;
    //list2->prev=p;
    
}
void funcNemo(Node *list1, Node *list2){
    
    while(list1!=NULL){
        cout<<list1->data<<" ";
        list1=list1->next;
    }
        cout<<endl;
    while(list2!=NULL){
        cout<<list2->data<<" ";
        list2=list2->next;
    }
   // sum1+sum2=result;
}

int main(){
    Node *list1=NULL;
    Node *list2=NULL;
    addBack(list1);
    addBack(list1);
    addBack(list1);
    addBack(list1);
    addBack(list1);
  //  display(list1);


    addBack(list2);
    addBack(list2);
    addBack(list2);
    addBack(list2);
    addBack(list2);
    addBack(list2);
    //display(list2);
    funcNemo(list1,list2);
    //margeList(list1,list2);

   // display(list1);
}