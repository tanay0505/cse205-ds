class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode *a = headA;
        ListNode *b = headB;
        int count = 0;
        while(a != b){
            if(count == 2) break;
            if(a == NULL) count ++;
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }
        if(a != b) {
            return NULL;
        }
        else{
            return a;
        }
    }
};