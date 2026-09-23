1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        
5        // int zero, ones, twos;
6        // zero = ones = twos = 0;
7        // for ( int i=0; i<nums.size(); i++){
8        //     if (nums[i] == 0){zero++;
9        //     }
10        //     else if (nums[i] == 1){
11        //         ones++;
12        //     }
13        //     else {twos++;
14        //     }
15        // }
16        //     // spread
17        //      int i = 0;
18        //     while (zero--){nums[i] = 0;
19        //     i++;}
20        //     while (ones--){
21        //         nums[i] = 1;
22        //         i++;
23        //     }
24        //     while (twos--){
25        //         nums[i] = 2;
26        //         i++;
27
28        //     }
29        int l=0, m=0, h=nums.size()-1;
30        while ( m <= h) {
31            if (nums[m]==0){
32                swap(nums[l],nums[m]);
33                m++, l++;
34            }
35          else  if (nums[m] == 1){ m++; }
36          else{ swap(nums[m],nums[h]);
37          h--;
38          }
39
40        }
41
42    }
43        
44    
45};