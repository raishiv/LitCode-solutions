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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow=  slow->next;
            fast = fast->next->next;
        }
        ListNode* cur = slow;
        ListNode* next;
        ListNode* prev = NULL;
        while(cur != NULL){
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
        }
        ListNode* t = prev;
        ListNode* f = head;
        while(t != f && t && f){
                cout<<"f:"<<f->val<<"t:"<<t->val<<endl;
                if(f->val == t->val){
                    f = f->next;
                    t = t->next;
                }
                else{
                    return false;
                }
        }
        return true;
        
        
    }
};