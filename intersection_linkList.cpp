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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ha = headA;
        ListNode* hb= headB;
        if(ha ==NULL || hb == NULL) return NULL;
        while(ha != hb){
            ha = ha->next;
            hb = hb->next;
            if(ha == hb) return ha;
            if(ha == NULL) ha = headB;
            if(hb == NULL) hb = headA;
        }
        return ha;
    }
};