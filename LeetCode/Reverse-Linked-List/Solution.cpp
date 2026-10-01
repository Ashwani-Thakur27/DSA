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
14      ListNode* reverselist1(ListNode* &prev, ListNode* &curr){
15       while(curr != NULL){
16       ListNode* forward = curr->next;
17       curr->next = prev;
18       prev = curr;
19       curr = forward;
20
21
22       }
23       return prev;
24      }
25
26    ListNode* reverselist(ListNode* &prev, ListNode* &curr){
27        //base case 
28        if(curr == NULL){
29            //iska matlab reverse ho chuka hai 
30            //reverse ll ka starting node previos poinster hai is liye ise return karna hai 
31            return prev;
32        }
33    //case 1 hum solve karenge baki ka rcursion sabhalega 
34    ListNode* forward = curr->next;
35    //yaha par hamne current node ke direction piche ki taraf kar dia hai 
36    curr->next = prev;
37    //pointer ko 1 step age badhaya hai aur recursion ko pakda dia hai 
38    prev = curr; 
39    curr = forward;
40
41     return reverselist(prev,curr);
42
43    }
44
45    ListNode* reverseList(ListNode* head) {
46              ListNode* prev = NULL;
47              ListNode* curr = head;
48              
49          ListNode* newhead = reverselist1(prev , curr);
50          return newhead;
51        
52    }
53};