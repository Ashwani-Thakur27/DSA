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
13
14  int getlength(ListNode* &head){
15
16        int length = 0;
17        ListNode* temp = head;
18        while(temp != NULL){
19            length++;
20            temp = temp->next;
21
22        }
23        return length;
24    }
25  
26    ListNode* reverseKGroup(ListNode* head, int k) {
27     //when ll is empty 
28     if(head == NULL){
29        return head;
30     }
31
32    //when ll has only one node 
33    if(head->next == NULL){
34        return head;
35    }
36    //when at least two or more than two node are availabel 
37    //here we do only one reverse other are done by the recursioin 
38    int length1 = getlength(head);
39    if(length1 < k){
40        //here we no need to reverse the ll 
41        return head;
42    }
43
44    ListNode* prev = NULL;
45    ListNode* curr = head;
46    int position = 0;
47    while(position < k){
48        ListNode* forward = curr -> next;
49        curr->next = prev;
50        prev = curr;
51        curr = forward;
52        position ++;
53
54    }
55
56    //here remaning case was done buy the recursion 
57    if(curr != NULL){
58        ListNode* recursionkahead = reverseKGroup(curr, k);
59        head->next = recursionkahead;
60    }
61
62        return prev;
63    }
64};