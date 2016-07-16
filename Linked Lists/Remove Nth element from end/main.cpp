/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(A==NULL)return A;
    int size = 0;
    ListNode *temp = A;
    while(temp->next!=NULL){
        size++;
        temp=temp->next;
    }
    if(B>size){
        A = A->next;
        return A;
    }
    //cout<<"size="<<size<<endl;
    temp=A;
    int index = size-B;
    //index--;
    while(index>0){
        index--;
        temp=temp->next;
    }
    temp->next = temp->next->next;
    return A;
}


