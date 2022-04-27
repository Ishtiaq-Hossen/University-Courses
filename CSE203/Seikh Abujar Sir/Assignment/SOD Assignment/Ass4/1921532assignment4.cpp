/**
 q->
    removeall ()
    countDuplicates(Node *root,int value)// returns no of duplicates of a value
    removeDuplicates(Node *root,int value) //takes a ref to a linked list and a value and deletes the value along with duplicates
    count() returns total number of nodes
    addIndex(int index,int value);

*/
#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node* next;
}*root=new Node;
void deleteSingleNode(Node *&head,int val){
    Node *prv = head;
    Node *tmp = head;

    while(tmp !=NULL){
        if(tmp->data == val){
            if(tmp == head){
                head = head->next;
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
void addFront(Node *head)
{
    int val;
    cin>>val;
    Node* temp=new Node;
    temp->data=val;
    temp->next=head;
    head=temp;
}
void addback(Node *&head)
{
    int val;
    cin>>val;
    Node* temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)head=temp;
    else{
        Node *temp2=head;
        
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;        
    }

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
void removeall(Node *&head)
{
    head=NULL;
}
int countDuplicates(Node *head, int value)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==value){
            count++;
        }
        temp=temp->next;
    }
    return count;
}
int count()
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
void addIndex(int index,int value)
{
    Node* temp=new Node;
    temp->data=value;
    temp->next=NULL;
    if(root==NULL)root=temp;
    else{
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
        else{
        temp->next=temp2->next;
        temp2->next=temp;}
        
    }
}
void removeDuplicates(Node *&head, int val){
    Node *prv = new Node;
    Node *tmp = new Node;
    prv=head;
    tmp=head;

    while(tmp!=NULL){
        if(tmp->data == val){
            if(tmp == head){
                head = head->next;
            }
            else{
                prv->next = tmp->next;
                
            }
            tmp=tmp->next;;
            
        }
        else{
        prv= tmp;
        tmp = tmp->next;
        }
    }
}
int main()
{
    
    root=NULL;
    // Here is addFront Function I just comment down it 

    /*
    addFront(head);
    addFront(head);
    addFront(head);
    */

    //-----taking input in link list-----/
    addback(root);
    addback(root);
    addback(root);
    addback(root);
    addback(root);
    addback(root);   
    addIndex(1,7);// adding node at 1 no index(note: index start from 0)

    //------------------------------------/
    /*-------there include 
        display(),
        countDuplicates(),
        deleteNode(),
        deleteSingleNode();
        removeall() -->function.
    */
    cout<<"After adding one node: ";
    display(root);
    cout<<"Count Given Duplicates: "<<countDuplicates(root,7)<<"\n";
    cout<<"Total Node: "<<count()<<endl;
    removeDuplicates(root,7);
    cout<<"After deleting all given node: ";
    display(root);
    cout<<"Total Node: "<<count()<<endl;
    deleteSingleNode(root,8);
    cout<<"After deleting given single node: ";
    display(root);
    cout<<"Total Node: "<<count()<<endl;
    //---------------------------------------/

    removeall(root);
    cout<<"After removing all node display(root) function: "<<endl;
    display(root);
    cout<<"There is no node availabe."<<endl;
    
    return 0;
}

/**
 * test cases
 * 2 7 8 9 7 10
*/
