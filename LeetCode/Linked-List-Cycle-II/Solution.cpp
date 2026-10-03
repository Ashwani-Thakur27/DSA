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
11ListNode* hasCycle1(ListNode *head) {
12       unordered_map<ListNode* , bool> m;
13       ListNode* temp = head;
14       while(temp != NULL){
15        if(m[temp]==true){
16            return temp ;
17        }
18        else {
19            m[temp] = true;
20            temp = temp->next;
21        }
22
23        
24
25       }
26       return nullptr;
27}
28    ListNode *detectCycle(ListNode *head) {
29      return   hasCycle1(head);
30        
31    }
32};