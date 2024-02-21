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

#include <bits/stdc++.h>

Node *findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    if(firstHead==NULL) {
        return NULL;
    }
    if(secondHead==NULL){
        return NULL;
    }
    
    unordered_set<Node*> st;
    
    Node* curr=firstHead;
    while(curr!=NULL){
        st.insert(curr);
        curr=curr->next;
    }
    curr=secondHead;
    while(curr!=NULL){
        if(st.find(curr)!=st.end()){
            break;
        }
        curr=curr->next;
    }
    return curr;
}