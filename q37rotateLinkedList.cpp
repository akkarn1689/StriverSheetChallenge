/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL) return head;
     
     Node *newHead=head;
     Node *tail=head;
     int n=1; // number of nodes int the list
     while(tail->next!=NULL){
          tail=tail->next;
          n++;
     }
        
     tail->next=head; // make the list circular
        
     if(k%=n){
          for(int i=0;i<n-k;i++) tail=tail->next;
          // (n-k)th node is new tail and it's next is newHead
     }
     newHead=tail->next;
     tail->next= NULL;

     return newHead;

}