1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4        bool ans_pos_sign = true;
5        if ( dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0)
6        {
7            ans_pos_sign = false;
8        }
9        if (dividend == INT_MIN && divisor == -1)
10    return INT_MAX;
11
12        long long int divi = abs((long long )dividend);
13        long long int divs = abs((long long)(divisor));
14       long long int s = 0;
15       long long int e = divi;
16       long long int ans = 0;
17       
18        while (s <= e) {
19            long long int mid = s + ((e - s) >> 1);
20            
21            if ( (divs * mid) <= divi) {
22                // store and compute
23                ans = mid;
24                // compute
25                s = mid + 1;
26            }
27             else {
28                e = mid - 1;
29            }
30           
31                  
32        }
33          if ( ans_pos_sign == false){
34                return  -ans;
35            }
36    
37      
38        
39        return ans;
40    }
41};