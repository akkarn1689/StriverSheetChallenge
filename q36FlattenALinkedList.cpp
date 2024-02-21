/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node *merge(Node *list1,Node *list2){
	// if list1 is NULL, return list2
    if(list1==NULL){
        return list2;
    }
        // if list2 is NULL, return list1
    if(list2==NULL){
        return list1;
    }

	Node *res;
	if(list1->data <= list2->data){
		res=list1;
        res->child=merge(list1->child,list2);
    }
    else{
		res=list2;
        res->child=merge(list1,list2->child);
    }
	// res->next=NULL;
	list1->next=NULL;
	list2->next=NULL;
	return res;
}


Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		return head;
	}

	head=merge(head,flattenLinkedList(head->next));
	// head->next->next=NULL;
	// head->next=NULL;

	return head;

}
