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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head1 = l1;
        ListNode *head2 = l2;
        ListNode *l3 = nullptr;
        ListNode *head3=nullptr;
        int carry=0;
        while (head1||head2)
        {
            int sum;
            if (head1 == nullptr)
            {
                sum = head2->val+carry;
            }
            else if (head2 == nullptr)
            {
                sum = head1->val+carry;
            }
            else
            {
                sum = head1->val + head2->val+carry;
            }
            carry=sum/10;
            ListNode *newnode = new ListNode(sum%10);
            if (l3 == nullptr)
            {
                l3 = newnode;
                head3 = l3;
            }
            else
            {
                head3->next = newnode;
                head3 = head3->next;
            }
            if (head1) head1 = head1->next;
            if (head2) head2 = head2->next;
        }
        if(carry>0){
            ListNode *newnode = new ListNode(carry);
            head3->next = newnode;
        }
        return l3;
    }
};