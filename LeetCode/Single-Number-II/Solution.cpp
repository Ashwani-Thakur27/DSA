1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int result = 0;
5
6        //check all 32 bits position of the each element 
7        for(int bits=0; bits<32; bits++){
8            int count = 0;
9        
10        // count 1s at current bit position
11        for( int i = 0; i<nums.size(); i++){
12            if((nums[i]>>bits)&1){
13                count++;
14            }
15        }
16        // if reminder is not 0 this belongs to the single numbers;
17        if(count %3 !=0){
18            result = result |(1<<bits);}
19
20        }
21        return result;
22               }        
23
24};