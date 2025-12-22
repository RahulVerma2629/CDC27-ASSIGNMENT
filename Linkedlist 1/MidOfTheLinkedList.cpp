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
    ListNode* middleNode(ListNode* head) {
        // size of list
        int n = 0;
        ListNode* p = head;
        while(p != NULL){
            n++;
            p = p->next;
        }
        // linked list ka head n/2 + 1 idx p lana hai
        int N = 0;
        while(N != (n/2)){
            N++;
            head = head->next;
        }
        return head;
    }
};
