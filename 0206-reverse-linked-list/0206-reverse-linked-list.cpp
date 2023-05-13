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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current = head;
        ListNode* after;
        while(current != NULL)
        {
            after = current->next;
            current->next = prev;
            prev = current;
            current = after;
        }
        // prev = head;
        return prev;
    }
};