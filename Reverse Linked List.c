/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev = NULL;
    struct ListNode *ptr = head;

    while (ptr) {
        struct ListNode *nxt = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = nxt;
    }

    head = prev;
    return head;
}
