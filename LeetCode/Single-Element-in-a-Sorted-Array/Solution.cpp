1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int s = 0;
5        int n = nums.size();
6        int e = n - 1;
7        int mid = s + (e - s) / 2;
8
9        while (s <= e) {
10
11            if (s == e) {
12                return nums[s];
13            }
14
15            int currentvalue = nums[mid];
16
17            int leftvalue = -1;
18            if (mid - 1 >= 0) {
19                leftvalue = nums[mid - 1];
20            }
21
22            int rightvalue = -1;
23            if (mid + 1 < n) {
24                rightvalue = nums[mid + 1];
25            }
26
27            // single element found
28            if (currentvalue != leftvalue && currentvalue != rightvalue) {
29                return currentvalue;
30            }
31
32            // case 1: pair is (mid, mid+1)
33            if (currentvalue == rightvalue) {
34                int pairstartingindex = mid;   // ✅ FIXED
35
36                if (pairstartingindex & 1) {
37                    e = mid - 1;
38                } else {
39                    s = mid + 2;   // ✅ FIXED (skip pair)
40                }
41            }
42
43            // case 2: pair is (mid-1, mid)
44            else if (currentvalue == leftvalue) {
45                int pairstartingindex = mid - 1;   // ✅ FIXED
46
47                if (pairstartingindex & 1) {
48                    e = mid - 2;   // ✅ FIXED
49                } else {
50                    s = mid + 1;
51                }
52            }
53
54            mid = s + (e - s) / 2;
55        }
56
57        return -1;
58    }
59};