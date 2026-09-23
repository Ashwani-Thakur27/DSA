1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        for(int i=0; i<nums.size(); i++){
5            int leftsum=0;
6            int rightsum = 0;
7            for(int j=0; j<i; j++){
8                leftsum+=nums[j];
9            }
10            for(int j=i+1; j<nums.size(); j++){
11                rightsum+=nums[j];
12            }
13                if(leftsum == rightsum){
14                    return i;
15                }
16            
17        }
18       return -1;
19    }
20};