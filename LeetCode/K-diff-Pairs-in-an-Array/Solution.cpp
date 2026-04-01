1class Solution {
2public:
3    int findPairs(vector<int>& nums, int k) {
4      /*  int count = 0;
5        int n = nums.size();
6        for(int i=0; i<n; i++){
7            for(int j = i+1; j<n; j++){
8                if( abs(nums[i]- nums[j]) == k){
9                    count++;
10                }
11            }
12        }
13        return count;    */
14        sort(nums.begin(), nums.end());
15        int i = 0 , j = 1;
16        set<pair<int,int>>ans;
17        while(j<nums.size()){
18            int diff = nums[j] - nums[i];
19            if (diff == k ){
20                ans.insert({ nums[i],nums[j]});
21                
22            i++;
23            j++;}
24            else if(diff>k){
25                i++;
26            }
27            else{//(diff<k)
28                j++;
29            }
30            if (i == j){
31                j++;
32            }
33                
34            
35        }
36
37     return ans.size();
38
39
40    }
41};