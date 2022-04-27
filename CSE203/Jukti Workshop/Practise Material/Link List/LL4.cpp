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

int numOfOccurrences(Node *head, int val){
    int cnt = 0;
    while(head != NULL){
        if(head->data == val){
            cnt++;
        }
        head = head->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    insertNode(head, 5);
    insertNode(head, 10);
    insertNode(head, 5);
    insertNode(head, 2);

    printList(head);
    cout<<"count: "<<numOfOccurrences(head, 5)<<endl;

}

