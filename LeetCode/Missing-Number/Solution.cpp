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
15
16    int missingNumber(vector<int>& nums) {
17         return  sortingmethod(nums);
18        
19    }
20};