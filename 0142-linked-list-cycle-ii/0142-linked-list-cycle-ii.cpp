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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode * slow;
        ListNode * fast;
        ListNode * detect = head;
        slow = head;
        fast = head;
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
             if(slow == fast)
             {
                   while(detect != slow)
                    {
                        slow = slow->next;
                        detect = detect->next;
                    }
                    return detect;
             }
        }
      
        return NULL;
    }
};