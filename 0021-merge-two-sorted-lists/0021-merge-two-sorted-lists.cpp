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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* list3 = nullptr;
        ListNode* temp3;
        while (temp1 && temp2) {
            if (temp1->val < temp2->val) {
                ListNode* newnode = new ListNode(temp1->val);
                temp1 = temp1->next;
                if (list3 == nullptr) {
                    list3 = newnode;
                    temp3 = list3;
                } else {
                    temp3->next = newnode;
                    temp3 = temp3->next;
                }
            } else {
                ListNode* newnode = new ListNode(temp2->val);
                temp2 = temp2->next;
                if (list3 == nullptr) {
                    list3 = newnode;
                    temp3 = list3;
                } else {
                    temp3->next = newnode;
                    temp3 = temp3->next;
                }
            }
        }
        if (temp1) {
            if (list3 == nullptr) {
                list3 = temp1;
                return list3;
            }
            temp3->next = temp1;
        } else if (temp2) {
            if (list3 == nullptr) {
                list3 = temp2;
                return list3;
            }
            temp3->next = temp2;
        }
        return list3;
    }
};