1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5        for(int i=0; i<s.length(); i++){
6            char ch = s[i];
7            //if the starting barackets are seen then we have to push them 
8            if(ch == '(' || ch == '{' || ch == '['){
9                st.push(ch);
10            }
11            else{
12                if(ch == ')' && !st.empty() && st.top() == '('){
13                    st.pop();
14                }
15
16               else if(ch == '}' && !st.empty() && st.top() == '{'){
17                    st.pop();
18                }
19               else if(ch == ']' && !st.empty() && st.top() == '['){
20                    st.pop();
21                }
22                else {
23                    return false;
24                }
25
26            }
27        }
28        if(st.empty()){
29            return true;
30        }
31        else return false;
32        
33    }
34};