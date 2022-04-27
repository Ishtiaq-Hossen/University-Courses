//---------Bismillahir Rahmanir Rahim--------/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
}*root=new Node,*tail=new Node;

void insert(int value)
{
    Node* temp=new Node;
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        Node* forad=root;
        while(forad->next!=NULL)
        {
            forad=forad->next;
        }
        forad->next=temp;
        temp->prev=forad;
        tail=temp;
    }
}
void sort_all_nodes()
{
    Node* temp=NULL;
    temp=root;
    int for_swap=0;
    while(temp->next!=NULL)
    {
        if(temp->data > temp->next->data){
            for_swap=temp->data;
            temp->data=temp->next->data;
            temp->next->data=for_swap;
            temp=root;
            continue;
        }
        
        temp=temp->next;
    }

}
void print()
{
    
    Node *temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printrev()
{
    Node *temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void deleteAnode()
{
    int val=0;
    cin>>val;
    Node* temp=root;
    if(temp->data==val){
        root=temp->next;
        root->prev=NULL;
        delete temp;
    }
    else if(tail->data==val)
    {
        Node* del=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete del;
    }
    else
    {
        while(temp->next->data!=val)
        {
            temp=temp->next;
        }
        Node *del=temp->next;
        temp->next=temp->next->next;
        del->next->prev=temp;
        delete del;
    }

}
void deleteAtfirst()
{
    if(root==NULL)
    {
        cout<<"Nothing is here to delete"<<endl;
    }
    Node* del=root;
    root=root->next;
    root->prev=NULL;
    delete del;

}
int count()
{
    int counter=0;
    Node* temp=root;
    while(temp!=NULL)
    {
        temp=temp->next;
        counter++;
    }
    return counter;

}
void delete_at_any_pos()
{
    int index=0;
    cout<<"Which position you want to delete: ";
    cin>>index;
    Node* temp=root;
    if(index==1){
        root=temp->next;
        root->prev=NULL;
        delete temp; 
    }
    else if(index==count())
    {
        Node* del=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete del;
    }
    else{
        int i=1;
        while(i<index)
        {
            temp=temp->next;
            i++;
        }
        Node *del=temp;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete del;
    }

}
int main()
{
    int temp=0;
    root=NULL;
    for(int i=5;i<=10;i++)
    {
        cin>>temp;
        insert(temp);
    }
    print();
    sort_all_nodes();
    print();
    printrev();

    /*
    deleteAnode();
    print();
    printrev();
    */

    /*
    deleteAtfirst();
    print();
    printrev();
    */
    delete_at_any_pos();
    print();printrev();

    return 0;
}
//5 8 9 2 1 15