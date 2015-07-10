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
    ListNode* rotateRight(ListNode* head, int k) {
     if(head == NULL) return NULL;
     int len = 1;
     ListNode* t = head;
     ListNode* new_head = head;
     while(t->next){
         t = t->next;
         len++;
     }
     t->next = head;
     if(k %= len){
         for(int i=0; i<len-k; i++) t = t->next;
     }
     new_head = t->next;
     t->next = NULL;
     return new_head;
   }
};