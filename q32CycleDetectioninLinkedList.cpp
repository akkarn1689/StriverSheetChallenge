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

bool detectCycle(Node *head)
{
	//	Write your code here
    if(head==NULL){
        return false;
    }

    Node *s=head,*f=head;
    while(f->next!=NULL && f->next->next!=NULL){
        s=s->next;
        f=f->next->next;

        if(s==f) return true;
    }
    return false;
}