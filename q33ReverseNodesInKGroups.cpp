#include <bits/stdc++.h>

/****************************************************************

    following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *f;
	        Node(int data)
	        {
		        this->data = data;
		        this->f = NULL;
	        }
        };

*****************************************************************/


Node* reverseKGroup(Node* head, int b[],int i,int n) {
        
		Node* curr=head;
        if(head==NULL || head->next==NULL || i==n){
			return head;
		}
		

        Node* prev=NULL;
        // curr=head;
        Node* next=NULL;

        int cnt=0;

        while(curr!=NULL && cnt<b[i]){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
		if(b[i]==0){
			return reverseKGroup(curr, b, ++i, n);
		}
        else if(next!=NULL){
            head->next = reverseKGroup(next,b,++i,n);
        }
        return prev;
        
    }

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    // Write your code here.
    if(!head || !head->next)return head;

    int i=0;
    return reverseKGroup(head, b, i, n);

 

}