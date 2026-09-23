1class Solution {
2public:
3
4    int sortingmethod(vector<int>& nums){
5        sort(nums.begin(), nums.end());
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i]==i){
8                continue;
9            }
10            else return i;
11        }
12        //edge case 
13        return nums.size();
14    }
15    int xoremethod(vector<int>& nums){
16        int ans = 0; 
17        for(int i=0; i<nums.size(); i++){
18            ans = ans^nums[i];
19        }
20        //second step 
21        for(int i=0; i<=nums.size(); i++){
22            ans = ans^i;
23        }
24        return ans;
25    }
26
27    int missingNumber(vector<int>& nums) {
28         //return  sortingmethod(nums);
29         return xoremethod(nums);
30        
31    }
32};