// 141. Linked List Cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/


// Solution 1:
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {

//         if (head == nullptr || head->next == nullptr) {
//             return false;
//         }

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };




// Solution 2:
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if (head == nullptr || head->next == nullptr) {
//             return false;
//         }

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };