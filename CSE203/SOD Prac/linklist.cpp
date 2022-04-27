#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert(Node *&head)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    int val=0;
    cin>>val;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)head=temp;
    else{
        Node* temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}
void addMiddle(int *&head)
{

}
void deleteValue(int *&head)
{

}
void display(Node *temp)
{
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}
void deleteSingleNode(Node *&head,int val){
    Node *prv = head;
    Node *tmp = head;
    while(tmp !=NULL){
        if(tmp->data == val){
            if(tmp == head){
                Node *temp=tmp;
                head = head->next;
                delete temp;
                return ;
            }
            else{
                prv->next = tmp->next;
            }
            delete tmp;
            return;
        }
        else{
            prv = tmp;
            tmp = tmp->next;
        }
    }
}
void addIndex(int index,int value,Node*&root)
{
    
    Node* temp=new Node;
    temp->data=value;
    temp->next=NULL;
    if(root==NULL)root=temp;
    else
    {
        Node *temp2=root;
        int i=0;
        while(i<(index-1)&& temp2->next!=NULL)
        {
            temp2=temp2->next;
            i++;
        }
        if(index==0)
        {
            temp->next=temp2;
            root=temp;
        }
        else
        {
            temp->next=temp2->next;
            temp2->next=temp;
        }
    }
}
int count(Node *root)
{
    Node* temp=root;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void deleteDuplicates(Node *&root,int value)
{
    if(root==NULL){ 
        return ; 
    } 
   
   //10 20 pq40 p50 30 60 80 
 
    else{ 
        if (root->data==value)
        {
            Node *temp=root;
            root=root->next;
            delete temp;
        }
        Node *p = root; 
        Node *q = root; 
        while(p!=NULL){ 
            if(p->data==value)
            {                 
                q->next=p->next; 
                delete p; 
                p=q->next; 
                
            } 
            else
            {  
                q=p; 
                p=p->next; 
            } 
        } 
    } 
}
int main()
{
    Node* head=NULL;
    insert(head);
    insert(head);
    insert(head);
    insert(head);
    insert(head);
    insert(head);
    //insert(head);
    int middle=count(head)/2;
    //cout<<middle<<endl;
    addIndex(middle,5,head);
    display(head);
    //deleteDuplicates(head,5);
    deleteSingleNode(head,7);
    display(head);
   
    return 0;
}
//7 5 8 9 5 2
