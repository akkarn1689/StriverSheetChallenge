/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node *s=head;
    Node *f=head;

    while(f->next!=NULL && f->next->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(f==s){
            break;
        }
    }

    if(f->next!=NULL && f->next->next!=NULL){
        s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        return s;
    }
    return NULL;
}