1class Solution {
2public:
3
4//  sort(nums.begin(), nums.end());
5//         for(int i=0; i<nums.size()-2;i++){
6//             if(nums[i]==nums[i+1]){
7//                 return nums[i];
8//             }
9//         }
10//         return -1;
11    int findDuplicate(vector<int>& nums) {
12       
13        int ans=-1;
14        for(int i=0; i<nums.size(); i++){
15            int index = abs(nums[i]);
16            if(nums[index]<0){
17                ans = index;
18                return ans; 
19                break;
20            }
21            else
22            nums[index] *=-1;
23        }
24        return ans;
25    }
26};