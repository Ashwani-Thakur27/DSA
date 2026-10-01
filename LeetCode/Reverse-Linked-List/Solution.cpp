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
13    ListNode* reverselist(ListNode* &prev, ListNode* &curr){
14        //base case 
15        if(curr == NULL){
16            //iska matlab reverse ho chuka hai 
17            //reverse ll ka starting node previos poinster hai is liye ise return karna hai 
18            return prev;
19        }
20    ListNode* forward = curr->next;
21    curr->next = prev;
22    prev = curr; 
23    curr = forward;
24
25     return reverselist(prev,curr);
26
27    }
28
29    ListNode* reverseList(ListNode* head) {
30              ListNode* prev = NULL;
31              ListNode* curr = head;
32              
33          ListNode* newhead = reverselist(prev , curr);
34          return newhead;
35        
36    }
37};