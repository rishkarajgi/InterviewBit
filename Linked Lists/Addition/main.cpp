/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int sum = 0;
    int carry =0;
    int sizeA=0,sizeB=0;
    ListNode *tempA,*tempB;
    tempA=A;
    tempB=B;
    while(tempA!=NULL){
        sizeA++;
        tempA=tempA->next;
    }
    while(tempB!=NULL){
        sizeB++;
        tempB=tempB->next;
    }
    
    if(sizeA>sizeB){
        ListNode *temp=A;
        A=B;
        B=temp;
    }
    
     tempA=A,tempB=B;   
        
    ListNode *prev = B;
    while(tempA!=NULL){
        sum=carry + tempA->val + tempB->val;
        carry = sum/10;
        tempB->val = sum%10;
        tempA=tempA->next;
        prev=tempB;
        tempB=tempB->next;
    }
    while(tempB!=NULL){
        sum=carry + tempB->val;
        carry = sum/10;
        tempB->val = sum%10;
        prev=tempB;
        tempB=tempB->next;
    }
    if(carry!=0){
        ListNode *newNode = new ListNode(carry);
        prev->next=newNode;
        return B;
    }
   
    
    return B;
}


