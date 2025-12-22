int nodePosition(struct Node* head, struct Node* node) {
    // code here
    int pos = 1;
    while(head->val != node->val){
        head = head->next;
        pos++;
    }
    return pos;
}
