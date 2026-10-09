1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* prev;
7    Node* next;
8    Node* child;
9};
10*/
11
12class Solution {
13public:
14    Node* solve(Node* head){
15        if(!head){
16            return nullptr;
17        }
18        auto it = head; 
19        auto tail = it;  //for tracking the tail node
20        while(it){
21            if(it->child){
22                auto childtail = solve(it->child);
23                auto temp = it->next;
24                it->next = it->child;
25                it->next->prev = it;
26                childtail->next = temp;
27                if(temp){
28                    temp -> prev = childtail;
29                   
30                } it->child = nullptr;
31            }
32            tail = it;
33            it = it->next;
34
35        }
36        return tail;
37    }
38    Node* flatten(Node* head) {
39        solve(head);
40        return head;
41    }
42};