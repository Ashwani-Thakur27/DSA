1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i=1 , j=0;
5        // two pointer approch 
6        while (i<nums.size()){
7            if (nums[i]==nums[j])  ++i;
8            // else {
9            //     j++;
10            //     nums[j]=nums[i];
11            //     i++;
12            // }
13            else{nums[++j]=nums[i++];
14            }
15        }  
16        return j+1;     
17    }
18};