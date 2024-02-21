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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
        if(head==NULL){
            return NULL;
        }
        LinkedListNode<int> *curr=head;
        LinkedListNode<int> *prev=NULL;
        while(curr->next!=NULL){
            LinkedListNode<int>*  temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        curr->next=prev;
        return curr;
}