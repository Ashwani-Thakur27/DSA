1class Solution {
2public:
3
4int bs(vector<int>&nums, int start, int x){
5        int end = nums.size() - 1;
6        while(start <= end){
7            int mid = start + (end - start)/2;
8            if (nums[mid] == x){
9                return mid;
10            }
11            else if (x > nums[mid] ){
12                start = mid + 1;
13            }
14            else {
15                end = mid - 1;
16            }
17
18            
19        }
20        return -1;
21    }
22
23
24    int findPairs(vector<int>& nums, int k) {
25      /*  int count = 0;
26        int n = nums.size();
27        for(int i=0; i<n; i++){
28            for(int j = i+1; j<n; j++){
29                if( abs(nums[i]- nums[j]) == k){
30                    count++;
31                }
32            }
33        }
34        return count;    */
35
36        // method 2
37
38     /*   sort(nums.begin(), nums.end());
39        int i = 0 , j = 1;
40        set<pair<int,int>>ans;
41        while(j<nums.size()){
42            int diff = nums[j] - nums[i];
43            if (diff == k ){
44                ans.insert({ nums[i],nums[j]});
45                
46            i++;
47            j++;}
48            else if(diff>k){
49                i++;
50            }
51            else{//(diff<k)
52                j++;
53            }
54            if (i == j){
55                j++;
56            }
57                
58            
59        }
60
61     return ans.size();  
62                                */
63
64    
65
66
67
68
69    sort(nums.begin(), nums.end());
70    set<pair<int, int>>ans;
71    for(int i = 0; i < nums.size(); i++){
72        if (bs(nums, i+1 , nums[i] + k) != -1){
73            ans.insert({nums[i],nums[i] + k});
74        }
75    }                         
76     return ans.size();
77
78    }
79};