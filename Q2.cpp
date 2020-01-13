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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *ans = new ListNode(0);
        ListNode *bridge = ans;
        while(carry||l1||l2){
            int val = (l1?l1->val:0)+(l2?l2->val:0)+carry;
            carry = val/10;
            bridge->next = new ListNode(val%10);
            l1=l1?l1->next:0;
            l2=l2?l2->next:0;
            bridge = bridge->next;
        }
        return ans->next;
    }
};