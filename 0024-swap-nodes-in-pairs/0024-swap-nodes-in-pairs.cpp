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
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *t = nullptr;
        while (temp && temp->next)
        {
            if (temp == head)
            {
                head = head->next;
                temp->next = head->next;
                head->next = temp;
                temp = head;
            }
            else
            {
                t->next = temp->next;
                t = t->next->next;
                ListNode *tomp = temp->next;
                temp->next = temp->next->next;
                tomp->next = temp;
                temp=tomp;
            }
            temp = temp->next;
            t = temp;
            if (temp)
            {
                temp = temp->next;
            }
        }
        return head;
    }
};