#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverse(LinkedListNode<int> *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *prev=NULL;

    while(curr!=NULL){
        LinkedListNode<int> *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL ||head->next==NULL){
        return true;
    }

    LinkedListNode<int> *s=head;
    LinkedListNode<int> *f=head;

    while(f->next!=NULL && f->next->next!=NULL){
        s=s->next;
        f=f->next->next;
    }

    s->next=reverse(s->next);

    f=s->next;
    s=head;

    while(f!=NULL){
        if(s->data!=f->data){
            return false;
        }
        s=s->next;
        f=f->next;
    }

    return true;

}