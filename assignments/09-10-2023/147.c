class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL|| head->next ==NULL){
            return head;
        }
        ListNode*temp = head;
        ListNode*prev = NULL;
        ListNode *newhead = insertionSortList(head->next);
        ListNode*it = newhead;

        while(it != NULL){
            if(it->val < temp->val){
                prev = it;
                it = it->next;
            }else{
                if(prev==NULL){
                    temp->next = it;
                    newhead = temp;
                  
                }else{
                    prev ->next = temp;
                    temp->next = it;
                    }
                    break;
            }
        }
        if(it == NULL){
            prev->next = temp;
            temp ->next = it; 
        }
        return newhead;
    }
};