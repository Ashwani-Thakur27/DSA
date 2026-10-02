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
11    bool hasCycle(ListNode *head) {
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
27        return false;
28    }
29};