/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    if(A==0)return A;
    if(m>n)
        reverseBetween(A,n,m);
        
    
    int size = 1;
    ListNode *temp = A;
    while(temp->next!=NULL){
        size++;
        temp=temp->next;
    }
    temp=A;
    if(m>size || n>size)return A;
    ListNode *prev,*curr,*nxt,*start=temp, *end;
    while(m>1){
                m--;
                n--;
                start=temp;
                temp=temp->next;
    }
    prev = temp;
    curr = prev->next;
    
    while(n>1 && curr!=NULL){
        n--;
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    start->next = prev;
    temp->next = curr;
    if(start==temp)
        A=prev;
    
    return A;
    
}

