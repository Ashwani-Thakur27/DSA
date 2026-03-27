1class Solution {
2public:
3
4
5bool cankokofinishedbananawithkspeed(vector<int>& piles, int h, int k){
6  long long  int totalhourtakentoeat = 0;
7    for( int i = 0; i<piles.size(); i++){
8        totalhourtakentoeat += ceil(piles[i]/(double)k);
9    }
10   /* if (totalhourtakentoeat <= h){return true;}
11    else {return false;}  
12    */
13    // or 
14    return totalhourtakentoeat <= h;
15} 
16
17
18
19    int minEatingSpeed(vector<int>& piles, int h) {
20        int start = 1;
21     /*   auto it = max_element(piles.begin(),pile.end());
22        int end = *it ;    
23    */  
24        // or 
25
26        int end = * max_element(piles.begin(),piles.end());
27        int ans = 0;
28        while ( start <= end){
29            int mid = start + (end - start)/2;
30            int k = mid;
31
32            if (cankokofinishedbananawithkspeed(piles,h,k)){
33                //if koko will finished all banana without being caught
34                ans = k ;
35                end = mid - 1;
36            }
37            else {
38                start = mid + 1;
39            }
40            
41        }
42        return ans;
43
44    }
45};