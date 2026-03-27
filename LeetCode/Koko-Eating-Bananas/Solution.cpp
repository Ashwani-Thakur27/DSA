1class Solution {
2public:
3
4
5bool cankokofinishedbananawithkspeed(vector<int>& piles, int h, int k){
6  long long  int totalhourtakentoeat = 0;
7    for( int i = 0; i<piles.size(); i++){
8        totalhourtakentoeat += ceil(piles[i]/(double)k);
9    }
10    if (totalhourtakentoeat <= h){return true;}
11    else {return false;}
12    // or 
13    return totalhourtakentoeat <= h;
14} 
15
16
17
18    int minEatingSpeed(vector<int>& piles, int h) {
19        int start = 1;
20     /*   auto it = max_element(piles.begin(),pile.end());
21        int end = *it ;    
22    */  
23        // or 
24
25        int end = * max_element(piles.begin(),piles.end());
26        int ans = 0;
27        while ( start <= end){
28            int mid = start + (end - start)/2;
29            int k = mid;
30
31            if (cankokofinishedbananawithkspeed(piles,h,k)){
32                //if koko will finished all banana without being caught
33                ans = k ;
34                end = mid - 1;
35            }
36            else {
37                start = mid + 1;
38            }
39            
40        }
41        return ans;
42
43    }
44};