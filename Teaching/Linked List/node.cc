#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this->data = data;
        this->next = NULL;
    }
    Node (){
        this->data = 0;
        this->next = NULL;
    }
};

void insertAtHead( Node* &head , int data){

    Node *toAdd = new Node(data);
    

    toAdd->next = head;
    head = toAdd;
}

void insertAtTail( Node* &head , int data){
    Node * toAdd = new Node(data);

    if ( head == NULL){
        insertAtHead(head , data);
        return;
    }

    Node * temp = head;
    while (temp->next != NULL){
        temp = temp->next; 
    }
    temp->next = toAdd;
} 


void display(Node *head)
{
    Node * temp = head;
    while (temp != NULL )
    {
        cout << temp->data << " -> ";

        temp = temp->next;

    }
    cout << "NULL";
    cout << endl;
}



int main()
{
    Node* node = NULL;


    insertAtHead(node , 500);
    display(node);
    insertAtTail( node , 1000);
    display(node);
    insertAtHead( node , 100);
    display( node);

    // for (int  i = 0; i < 21; i++)
    // {
    //     insertAtTail(node, i*10);

    // }
    // display(node);

    



 return 0;
}