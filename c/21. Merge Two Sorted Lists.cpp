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
    ListNode* getNext(ListNode* &l1, ListNode* &l2,ListNode* &cur){
        ListNode* tmp=NULL;
        if(l1!=NULL && l2!= NULL){
            if(l1->val < l2->val){
                tmp=l1;
                l1=l1->next;
            }
            else{
                tmp=l2;
                l2=l2->next;
            }
        }
        else if(l1!=NULL){
            tmp=l1;
            l1=l1->next;
        }
        else if(l2!=NULL){
            tmp=l2;
            l2=l2->next;
        }

        cur->next=tmp;
        cur=cur->next; // 继续后移
        return tmp;
    }


    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode a=ListNode(0);
        ListNode* tmp=&a;
        
        while(getNext(l1,l2,tmp)){}

        return a.next;

    }
};
