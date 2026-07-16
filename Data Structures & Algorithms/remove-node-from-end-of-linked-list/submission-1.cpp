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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* ptr=head;
        while(ptr!=nullptr)
        {
            len++;
            ptr=ptr->next;
        }
        if (len == n)
            return head->next;
        int del=len-n-1;
        ListNode* current;
        ListNode* prev=head;
        while(del)
        {
            prev=prev->next;
            del--;
        }
        if(prev->next->next!=nullptr)
        {
            prev->next=prev->next->next;
        }
        else
        {
            prev->next=nullptr;
        }
        return head;
    }
};
