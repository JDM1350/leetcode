/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        if(head==nullptr) return head;
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode* curr=head;
        ListNode* prev = head;
        while(curr!=nullptr){
            if(curr->val==val){
               
			prev->next=curr->next;
			curr=curr->next;

            }
            else{
                prev=curr;
                curr= curr->next;
            }
        }
        return head;
        
    }
};
