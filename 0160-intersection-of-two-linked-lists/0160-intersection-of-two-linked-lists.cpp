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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1 = headA;
        ListNode *t2 = headB;
        unordered_map<ListNode *,int> m;
        while(t1)
        {
            m[t1]++;
            t1 = t1->next;
        }
        while(t2)
        {
            if(m.find(t2) != m.end()) return t2;
            t2 = t2->next;
        }
        return NULL;
    }
};