/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int l=0;
        if(head==NULL){
            return NULL;
        }
        ListNode* t=head;
        while(t){
            t=t->next;
            l++;
        }


        int m=l-n;
        
        while(m<=0){ 
            ListNode *r=head;
            head=head->next;
            delete r;
            return head;

          
        }
       ListNode *a=head;
       while(m>1){
           a=a->next;
           m--;
       }

       ListNode* r=a->next;
       a->next=a->next->next;
       delete r;
       return head;
        
    }
};
