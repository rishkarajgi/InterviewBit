/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    
    
    //step1 get midpoint
    
    ListNode *fast=A;
    ListNode *mid=A;
    while(fast!=NULL && fast->next!=NULL){
        //cout<<"1"<<endl;
        fast = fast->next->next;
        mid = mid->next;
    }
    
    ListNode *prev=NULL;
    ListNode *curr;
    ListNode *nxt;
    curr = mid;
    //Step 2 reverse second half
    while(curr!=NULL){
        //cout<<"2"<<endl;
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    //cout<<"head of reversed="<<prev->val<<endl;
    //Step 3: reorder nodes and prev stores head of reversed list
    
    ListNode *a,*b,*c,*d;
    a = A;
    b = a->next;
    c = prev;
    d = c->next;
    
    while(d!=NULL){
        //cout<<"3"<<endl;
        a->next = c;
        c->next = b;
        a = b;
        b = b->next;
        c = d;
        d = d->next;
    }
    return A;
}


