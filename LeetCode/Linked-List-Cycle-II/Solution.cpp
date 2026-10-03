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
28
29ListNode* hascycle(ListNode *head){
30    ListNode* slow = head; 
31    ListNode* fast = head;
32    while(fast != NULL){
33        fast = fast->next;
34        if(fast != NULL){
35            fast = fast->next;
36            slow = slow->next;
37        }
38        if(fast == slow){
39            return slow;
40        }
41
42    }
43    return nullptr;
44}
45ListNode* returnpointer(ListNode *head){
46    //check is any cycle present 
47    ListNode* fast = hascycle(head);
48    if(fast == NULL){
49        return nullptr;
50    } 
51    ListNode* slow = head;
52    while(slow != fast){
53        slow = slow->next;
54        fast = fast->next;
55    }
56    return fast;
57}
58
59    ListNode *detectCycle(ListNode *head) {
60      //return   hasCycle1(head);
61        return returnpointer(head);
62    }
63};