/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL || A->next==NULL)return A;
    ListNode *a,*b,*p=A;
    a=A;
    b = a->next;
    //first swap
    a->next = b->next;
    b->next = a;
    ListNode *temp = a;
    a = b;
    b = temp;
    A = a;
    p=a;
    
    if(b==NULL)
        return A;
    if(b->next==NULL)
        return A;
    
    p=p->next;
    a=a->next->next;
    b=b->next->next;
    while(b!=NULL){
        a->next = b->next;
        b->next = a;
        temp = a;
        a = b;
        b = temp;
        p->next=a;
        p=p->next->next;
        a=a->next->next;
        if(a==NULL)return A;
        b=b->next->next;

    }
    return A;
 }
 


