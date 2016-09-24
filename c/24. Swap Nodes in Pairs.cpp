/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy=ListNode(0);
        ListNode *pre = &dummy;
        pre->next=head;

        while(head && head->next){
            ListNode *next_one = head;
            ListNode *next_two = head->next;
            ListNode *next_three = head->next->next;
            
            pre->next=next_two;
            next_two->next=next_one;
            next_one->next=next_three;
            
            head=next_three;
            pre=next_one;
        }
        
        return dummy.next;
        
    }
};


// introduction:
/*
![pic](https://github.com/lucyking/pic/blob/master/leetcode/24.%20Swap%20Nodes%20in%20Pairs.jpg)
 */
