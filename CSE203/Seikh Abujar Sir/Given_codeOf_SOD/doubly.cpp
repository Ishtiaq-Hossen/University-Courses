#include<iostream>
using namespace std;

struct Node
{   Node *prev;
    int data;
    Node *next;
};
void addback(Node *&head ,int value){
    Node* p = new Node;
    p->data = value;
    p->next = NULL;
    p->prev = NULL;
 
    if(head==NULL){
        head = p;
    }
    else {
        Node * q = head;
        while(q->next!=NULL) {
            q = q->next;
        }
        q->next = p;
        p->prev = q;
    }
}


void reversedDisplay(Node *head){

    while (head->next!=NULL)
    {
        head=head->next;
    }
    cout<<head->data<<endl;

    while (head!=NULL)//correct / incorrect head->prev!=null
    {
        cout<<head->data<<" ";
        head=head->prev;
    }
    

}
int sizeOfList(Node *head){
    int counter=0;
    while(head!=NULL){
        counter++;
        head=head->next;
    }
    return counter;
}
void addMiddle(Node *&head){
    int size= sizeOfList(head);
    int middle = size/2;
    
    Node *p=head;
    for(int i=0;i<middle;i++)
    {
        p=p->next;
    }
    int value;
    cin>>value;

    Node *q=new Node;
    Node *r=p->next;
    q->data=value;
    q->next=r;
    p->next=q;
    r->prev=q;
    q->prev=p;

}

void deleteSingleValue(Node *&head , int value){

}

void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main(){
    Node *head=NULL;
    addback(head,10);
    addback(head,20);
    addback(head,30);
    addback(head,40);
    addback(head,50);
    addback(head,60);
    addback(head,70);
    addback(head,80);
    addback(head,90);
    addback(head,55);
    addback(head,35);

    addMiddle(head);
    display(head);
    return 0;
}

//addMiddle
//delete
//sort
/* 
while(p->next!=null){
    if(p->data>p->next->data){
        if(p==head){
            q=p->next;
            r=q->next;
            head=q;
            q->next=p;
            p->prev=q;
            r->prev=p;
            p->next=r;

        }
        else{

        }
    }
}
 */
// 1 p5 qpn3 r6 2 1
// 1 2 3 5 6
//5 3 6
