class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }

        ListNode* mylist = lists[0];

        for (int i = 1; i < lists.size(); i++) {
            mylist = mergeTwoLists(mylist, lists[i]);
        }

        return mylist;
    }

private:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        if (l1) {
            tail->next = l1;
        } else {
            tail->next = l2;
        }

        return dummy.next;
    }
};
