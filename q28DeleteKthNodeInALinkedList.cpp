/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(head==NULL) return NULL;

    Node* l=head,*h=head;
    int i;
    for(i=0;i<K && h->next!=NULL;i++){
        h=h->next;
    }
    while(h->next!=NULL){
        l=l->next;
        h=h->next;
    }
    if(l==head && i!=K){
        Node* t=head;
        head=t->next;
        delete(t);
    }
    else{
        Node* temp=l->next;
        l->next=temp->next;
        delete(temp);
    }
    return head;
}
