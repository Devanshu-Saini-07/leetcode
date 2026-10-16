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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);

        while (head != NULL) {
            ListNode* next = head->next;
            ListNode* curr = dummy;

            while (curr->next != NULL &&
                   curr->next->val <= head->val) {
                curr = curr->next;
            }

            head->next = curr->next;
            curr->next = head;

            head = next;
        }

        return dummy->next;
    }
};
