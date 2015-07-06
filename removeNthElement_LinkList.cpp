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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* last = head;
        ListNode* new_head = head;
        if(head == NULL) return NULL;
        while(n && last->next){
            last = last->next;
            n--;
        }
        while(last->next != NULL){
            last = last->next;
            first = first->next;
        }
        if(first == head && last == head){
            new_head = head->next;
        }
        else if(first == head && n!= 0) new_head = head->next;
        else{
            first->next = first->next->next;
        }
        return new_head;
    }
    
};