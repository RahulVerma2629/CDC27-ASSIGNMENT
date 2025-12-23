/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int a = 0;
        int size = 0;
        ListNode* ptr;
        ListNode* p = head;
        while(p != NULL){
            p = p->next;
            size++;
        }
        p = head;
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        k = k % size;
        while(a != k){
            ptr = head;
            p = head;
            while(p->next->next != NULL){
                ptr = ptr->next;
                p = p->next;
            }
            p = p->next;
            // new connections 
            p->next = head;
            ptr->next = NULL;
            head = p;
            a++;
        }
        return head;
    }
};
