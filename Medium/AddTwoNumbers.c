/* You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807. */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *ll1, *ll2;
    struct ListNode *head = NULL;
    struct ListNode **lp = &head;
    int carry = 0, sum = 0, val1, val2;
    for(ll1 = l1, ll2 = l2; ll1 || ll2;) 
    {
        val1 = ll1 ? ll1->val : 0;
        val2 = ll2 ? ll2->val : 0;
        sum = val1 + val2 + carry;
        *lp = malloc(sizeof(struct ListNode));
        (*lp)->val = sum % 10;
        (*lp)->next = NULL;
        carry = sum / 10;
        lp = &(*lp)->next;
        ll1 = ll1 ? ll1->next : NULL;
        ll2 = ll2 ? ll2->next : NULL;
    }
    if (carry) {
        *lp = malloc(sizeof(struct ListNode));
        (*lp)->val = carry;
        (*lp)->next = NULL;
    }
    return head;     
}