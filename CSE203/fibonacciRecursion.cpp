/*#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void printList(Node *n)
{
    Node* temp=n;
    while(temp != NULL)
    {
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << "\b\n";
}
void deleteEnd(Node *&head){
    if(head==NULL){
        return;
    }
    Node *tmp = head;
    Node *prv =new Node;
    while(tmp->next != NULL){
        prv = tmp;
        tmp = tmp->next;
    }
    prv->next = NULL;
    delete tmp;
    
}
void insertNode(Node *&n, int d)
{
    Node *newNode = new Node;
    newNode->data = d;
    newNode->next = NULL;

    if(n == NULL)
        n = newNode;
    else{
        Node *tmp = n;

        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

int main()
{
    Node *head = NULL;
    insertNode(head, 5);
    insertNode(head, 10);
    insertNode(head, 15);
    insertNode(head, 20);
    insertNode(head, 25);

    printList(head);

    //deleteEnd(head);
    //deleteFront(head);
    deleteEnd(head);

    printList(head);

}
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=5;j>i;j--)
            cout<<" ";
        for(j=0;j<i;j++)
            cout<<"* ";
        cout<<endl; 
    }
    for(i=0;i<5;i++){
        for(j=0;j<i;j++)
            cout<<" ";
        for(j=5;j>i;j--)
            cout<<"* ";
        
        cout<<endl; 
    }
    return 0;

}*/

/*
#include<iostream>
using namespace std;
void k(int m){
    if(m==0)return ;
    else{
        cout<<m<<" ";
        k(m-1);
        
    }
}
int main()
{
    k(5);
}
*/
#include<iostream>
using namespace std;
int fib(int x){
    if(x==1 || x==0)return x;
    else{
       return fib(x-1)+fib(x-2);
    }
    return 0;
}
int main()
{   
    int x=0;
    while(x!=5)
    {
        cout<<fib(x)<<" ";
        x++;
    }
    return 0;
}

