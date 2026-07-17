class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        stack<int> st;
        ListNode* node = head;

        while (node != nullptr)
        {
            st.push(node->val);
            node = node->next;
        }

        node = head;

        while (node != nullptr)
        {
            node->val = st.top();
            st.pop();
            node = node->next;
        }

        return head;
    }
};