#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

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

void printList(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << ", ";
        n = n->next;
    }
    cout << endl;
}

bool equalNode(Node *h1, Node *h2){
    while(h1 != NULL && h2 != NULL){
        if(h1->data != h2->data){
            return false;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    if(h1 != NULL || h2 != NULL){
        return false;
    }
    return true;
}

int main()
{
    Node *head1 = NULL;
    insertNode(head1, 5);
    insertNode(head1, 10);
    insertNode(head1, 5);
    insertNode(head1, 2);

    Node *head2 = NULL;
    insertNode(head2, 5);
    insertNode(head2, 10);
    insertNode(head2, 5);

    cout<<"Linked list 1: ";
    printList(head1);
    cout<<"Linked list 2: ";
    printList(head2);

    if(equalNode(head1,head2)){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }
    return 0;
}


