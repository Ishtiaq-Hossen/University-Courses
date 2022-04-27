//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int arr[5]={9,6,7,8,3},low=0,high=4;
struct Node{
    int data;
    Node* next;
    Node* prev;
}*root=new Node,*tail=new Node;

void pop()
{
    Node* temp=new Node;
    temp->data=arr[high];
    temp->next=NULL;
    temp->prev=NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    Node* traverse=root;
    while(traverse->next!=NULL)
    {
        traverse=traverse->next;
    }
    traverse->next=temp;
    temp->prev=traverse;
    tail=temp;

}
void dequeue()
{
    Node* temp=new Node;
    temp->data=arr[low];
    temp->next=NULL,temp->prev=NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    Node* traverse=root;
    while(traverse->next!=NULL)
    {
        traverse=traverse->next;
    }
    traverse->next=temp;
    temp->prev=traverse;
    tail=temp;
}
void print()
{
    Node* temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printrev()
{
    Node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void second()
{
    Node* temp=root;
    while(temp!=NULL)
    {
        if(root->data<5)
        {
            Node *del=root;
            root=root->next;
            root->prev=NULL;
            temp=root;
            delete del;
            continue;
        }
        else if(tail->data<5){
            Node* del=tail;
            tail=tail->prev;
            tail->next=NULL;
            temp=root;
            delete del;            
        
        }
        else if(temp->data<5){
            
            
                Node* del=temp;
                temp->prev->next=del->next;
                del->next->prev=temp->prev;
                delete del;   
                continue;
        }
        else{
            temp=temp->next;
        }
    }
}
int main()
{
    root=NULL;
    while(low<=high)
    {
        pop();
        high--;
        if(low<high)
        {
            dequeue();
            low++;
        }

    }
    print();
    printrev();
    second();
    print();
    printrev();
    return 0;
}
