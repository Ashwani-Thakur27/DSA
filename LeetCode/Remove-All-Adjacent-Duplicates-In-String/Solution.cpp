1class Solution {
2public:
3    string removeDuplicates(string s) {
4        //initialize an empty sting
5        string ans = "";
6        int n = s.length();
7        for (int i = 0; i<n; i++){
8            int currcharacter = s[i];
9            //if ans sting is empty direct push back karenge 
10            if(ans.empty()){
11                ans.push_back(currcharacter);
12            }
13            //if currcharacter == ansback() pop back
14            else if(currcharacter == ans.back()){
15                ans.pop_back();
16            }
17            else if(currcharacter != ans.back()){
18                ans.push_back(currcharacter);
19            }
20        }
21
22        return ans;
23    }
24};