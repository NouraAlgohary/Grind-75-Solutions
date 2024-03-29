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
        ListNode* prevNode = NULL, *nextNode, *tempNode = head;
        while(tempNode != NULL)
        {
            nextNode = tempNode->next;
            tempNode->next = prevNode;
            prevNode = tempNode;
            tempNode = nextNode;
        }

        return prevNode;
    }
};