/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    if(A==NULL) return A;
    
     ListNode *temp = A;
    //hashtable of node addresses
    std::set<ListNode*>hashtable;
    while(temp->next!=NULL)
    {   
        if (hashtable.count(temp)) {
            return temp;
        } else {
            hashtable.insert(temp);
            temp = temp->next;
        }
    }
    return NULL;
}

