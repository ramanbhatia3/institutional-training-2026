// Remove Linked List Elements

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
//     ListNode* removeElements(ListNode* head, int val) {
//         ListNode* start = new ListNode(0);
//         start->next = head;

//         ListNode* ptr = start;

//         while (ptr->next != nullptr){
//             if (ptr->next->val == val){
//                 ListNode* toDelete = ptr->next;
//                 ptr->next = ptr->next->next;
//                 delete toDelete;
//             }
//             else{
//                 ptr = ptr->next;
//             }
//         }

//         ListNode* newHead = start->next;
//         delete start;
        
//         return newHead;
//     }
// };