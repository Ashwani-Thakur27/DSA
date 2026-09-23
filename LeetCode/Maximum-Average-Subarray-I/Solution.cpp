1class Solution {
2public:
3
4    double bruteforcemethod(vector<int>& nums, int &k){
5        int maxSum = INT_MIN;
6        int i = 0; int j = k-1;
7        double average;
8        while(j<nums.size()){
9            int ans =0;
10            for(int y=i; y<=j; y++){
11                ans+=nums[y];
12            }
13            maxSum = max(maxSum,ans);
14            j++,i++;
15        }
16        average = (double)maxSum / (double)k;
17        return average;
18    }
19    double slidingwindowapproch(vector<int>& nums, int &k){
20        int i=0, j=k-1;
21        int sum = 0;
22        for(int y=i; y<=j; y++){
23            sum+=nums[y];
24        }
25        int maxsum = sum;
26        j++;
27        while(j<nums.size()){
28            sum = sum - nums[i++];
29            sum = sum + nums[j++];
30            maxsum = max(maxsum, sum);
31        }
32        double average = maxsum / (double)k;
33        return average;
34    
35    }
36
37    double findMaxAverage(vector<int>& nums, int k) {
38       //return  bruteforcemethod(nums,k);
39       return slidingwindowapproch(nums,k);
40        
41    }
42};