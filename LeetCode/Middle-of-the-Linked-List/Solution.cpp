1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* middleNode(ListNode* head) {
14        //sabse pehle fast aur slow node banate hai 
15        ListNode* fast = head;
16        ListNode* slow = head;
17        while(fast != NULL){
18            //sabse pehle fast ko ek step age chalte hai 
19            fast = fast->next;
20            //nUll check karo aur fast ko age badhao 
21            if(fast != NULL){
22                fast = fast->next;
23                // then slow ko ek step age badhayenge 
24                slow = slow->next;
25            }
26        }
27        return slow;
28    }
29};