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
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        //case 1 when ll is empty 
16        if(head==NULL){
17            return head;
18        }
19        //case when ll has only one node
20        if(head->next == NULL){
21            return head;
22        }
23        //when ll has more than one node 
24        ListNode* prev = head;
25        ListNode* temp = head->next;
26        while(temp != NULL){
27            if(prev->val == temp->val){
28                prev->next = temp->next;
29                temp->next = NULL;
30                delete temp;
31                temp = prev->next;
32            }
33            else {
34                temp = temp->next;
35                prev = prev->next;
36            }
37
38        }
39          return head;
40        
41    }
42};