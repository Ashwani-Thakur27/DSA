1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11      bool hasCycle1(ListNode *head) {
12       unordered_map<ListNode* , bool> m;
13       ListNode* temp = head;
14       while(temp != NULL){
15        if(m[temp]==true){
16            return true;
17        }
18        else {
19            m[temp] = true;
20            temp = temp->next;
21        }
22
23        
24
25       }
26
27        return false;}
28    bool hasCycle(ListNode *head) {
29
30        ListNode* fast = head;
31        ListNode* slow = head;
32       while(fast != NULL){
33           fast = fast->next;
34           if(fast != NULL){
35            fast = fast->next;
36            slow = slow->next;
37           }
38           if(fast == slow){
39            return true;
40           }
41       }
42       return false;
43    }
44};