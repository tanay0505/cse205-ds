class Solution {
public:
    ListNode*merge(ListNode*f,ListNode*s){
        
        ListNode*head;
        ListNode*h1=f;
        ListNode*h2=s;
        
        if(h1->val<=h2->val){
            head=h1;
            h1=h1->next;
        }
        else{
            head=h2;
            h2=h2->next;
        }
        ListNode*h=head;
        
        while(h1!=NULL && h2!=NULL){
            if(h1->val<=h2->val){
                h->next=h1;
                h=h1;
                h1=h1->next;
            }
            else{
                h->next=h2;
                h=h2;
                h2=h2->next;
            }
        }
        
        if(h1!=NULL){
            h->next=h1;
        }
        if(h2!=NULL){
            h->next=h2;
        }
        return head;
    }
    ListNode* merge_sort(ListNode* head){
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode*slow=head;
        ListNode*fast=head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode*second=slow->next;
        slow->next=NULL;
        
        ListNode*firsthalf=merge_sort(head);
        ListNode*sechalf=merge_sort(second);
        
        return merge(firsthalf,sechalf);
    }
    ListNode* sortList(ListNode* head) {
        return merge_sort(head);
    }
};