// Remove Nth Node From End of List

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

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* ptr = head;

//         int count = 0;

//         while (ptr != nullptr) {
//             ptr = ptr->next;
//             count++;
//         }

//         if (count == n) {
//             ListNode* toDelete = head;
//             head = head->next;
//             delete toDelete;
//             return head;
//         }

//         ptr = head;

//         for (int i = 0; i < count-n-1; i++) {
//             ptr = ptr->next;
//         }

//         ListNode* toDelete = ptr->next;
//         ptr->next = ptr->next->next;
//         delete toDelete;

//         return head;
//     }
// };