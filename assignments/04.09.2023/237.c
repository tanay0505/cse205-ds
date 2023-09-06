class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node){
            node->val=node->next->val;
            if(node->next != NULL && node->next->next == NULL){
                node->next = NULL;
            }
            node=node->next;
        }
    }
};