#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

typedef LinkedListNode<int> Node;

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.

    // Method 1: using unordered_map

    // unordered_map<Node*,Node*> m;
    // for(Node* curr=head;curr!=NULL;curr=curr->next){
    //     m[curr]=new Node(curr->data);
    // }

    // for(Node* curr=head;curr!=NULL;curr=curr->next){
    //     Node* cloneCurr=m[curr];
    //     cloneCurr->next=m[curr->next];
    //     cloneCurr->random= m[curr->random];
    // }
    // return m[head];


    // Method 2 : constant space solution

    for(Node* curr=head;curr!=NULL;){
        Node* nxt=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next = nxt;
        curr=nxt;
    }

    for(Node* curr=head;curr!=NULL;curr=curr->next->next){
        curr->next->random = (curr->random!=NULL)?curr->random->next:NULL;
    }

    Node* temp=new Node(0);
    Node* copy=temp;
    Node* curr=head;
    Node* nxt=head;
    while(curr!=NULL){
        nxt=curr->next->next;
        copy->next=curr->next;
        copy = copy->next;
        curr->next=nxt;
        curr=curr->next;
    }

    
    return temp->next;


}
