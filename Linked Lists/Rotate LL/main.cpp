/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    ListNode *temp = A;
    int size=0;
    while(temp->next!=NULL){
        size++;
        temp=temp->next;
    }
    size++;
    if(size==1 || size==0)return A;
    temp->next = A;
    temp = A;
    B = B%size;
    int index = size - B;
    index--;
    while(index>0){
        index--;
        temp = temp->next;
        
    }
    ListNode *newHead = temp->next;
    temp->next = NULL;
    A = newHead;
    return A;
}


