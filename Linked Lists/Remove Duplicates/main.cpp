/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL || A->next==NULL) return A;
    
    ListNode *temp = A;
    ListNode *deletenode;
    while(temp->next!=NULL){
        if(temp->val==temp->next->val){
            deletenode = temp->next;
            temp->next = temp->next->next;
            delete(deletenode);
        }else{
            temp=temp->next;
        }
        
    }
    return A;
}

