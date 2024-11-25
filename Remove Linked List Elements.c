struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head != NULL && head->val == val){
        head = head->next;
    }
    if(head == NULL){
        return head;
    }
    struct ListNode* mover1 = head;
    struct ListNode* mover2 = head->next;
    while(mover2 != NULL){
        if(mover2->val == val){
            mover1->next = mover2->next;
        }else{
            mover1 = mover2;
        }
        mover2 = mover2->next;
    }
    return head;
}
