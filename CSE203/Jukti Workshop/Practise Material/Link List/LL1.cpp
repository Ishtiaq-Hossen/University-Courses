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

//Find the average of the elements present from 5 till the end of the list.
float avg(Node *head){
    Node *tmp = head;
    int cnt = 0;
    float sum = 0;
    while(tmp != NULL){
        sum = sum+tmp->data;
        tmp = tmp->next;
        cnt++;
    }
    return sum/cnt;
}

int main()
{
    Node *head = NULL;
    insertNode(head, 5);
    insertNode(head, 10);
    insertNode(head, 5);
    insertNode(head, 2);

    printList(head);
    cout<<"AVG: "<<avg(head)<<endl;

}

