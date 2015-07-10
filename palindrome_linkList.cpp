/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        else if(head->next == NULL) return true;
        ListNode* h = head->next;
        ListNode* t = head;
        int count = 0;
        
        while(h->next != NULL){
            if(t->val == h->val){
                count = 1;
                break;
            }
            else if(t->val = h->next->val){
                h = h->next;
                count = 1;
                break;
            }
            t = t->next ;
            h = h->next;
        }
        if(count){
            ListNode* cur = h;
            ListNode* next;
            ListNode* prev = NULL;
            while(cur != NULL){
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
            h = prev;
            ListNode* f = head;
            while(h->next != NULL){
                if(f->val == h->val){
                    f = f->next;
                    h = h->next;
                }
                else{
                    return false;
                }
                return true;
            }
        }
        else return false;
        
    }
};