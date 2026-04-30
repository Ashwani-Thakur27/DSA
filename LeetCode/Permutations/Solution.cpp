1class Solution {
2public:
3void solve(vector<int> &nums,int i,vector<vector<int>> &ans){
4    //base case 
5    if(i>=nums.size()){
6        ans.push_back(nums);
7        return;
8        }
9    for(int j=i; j<nums.size(); j++){
10        swap(nums[i],nums[j]);
11        solve(nums,i+1,ans);
12        //backtrack
13        swap(nums[i],nums[j]);
14    }
15}
16    vector<vector<int>> permute(vector<int>& nums) {
17        vector<vector<int>>ans;
18        int i=0;
19        solve(nums,i,ans);
20        return ans;
21        
22    }
23};