/**
	//November 30th, 2024
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(); //did not realize I needed the new ListNode() 
        ListNode* l4 = l3;
        int carry = 0;
        int sum = 0;
        while (l1!=nullptr  || l2!=NULL || carry){
            sum = carry;
            
            if (l1){
             sum += l1->val;
             l1 = l1->next;
            }
            
            if (l2){
                sum += l2->val;
                l2 = l2->next;
            }

            if (sum >=10)
            {
                sum -=10;
                carry = 1;
            }else{
                carry = 0;
            }

            l3->next = new ListNode(sum);
            l3 = l3->next;
        }


        ListNode* res = l4->next;
        delete l4;
        return res; 
    }
};
