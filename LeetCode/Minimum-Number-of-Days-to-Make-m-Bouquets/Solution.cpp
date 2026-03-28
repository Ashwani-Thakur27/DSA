1class Solution
2{
3public:
4    bool canWeMakeMBouquetsWithDDays(vector<int> &bloomDay, int m, int k, int D)
5    {
6        int counter = 0;
7        for (int i = 0; i < bloomDay.size(); i++)
8        {
9            // check whether the ith flower is bloomed or not
10            if (bloomDay[i] <= D)
11            {
12                // bloom ho gaya hoga
13                counter++;
14            }
15            if (counter == k)
16            {
17                m--; // i can make a Bouquet
18                counter = 0;
19                if (m == 0)
20                    break;
21            }
22
23            // not bloomed case
24            if (bloomDay[i] > D)
25                counter = 0;
26        }
27        return m == 0; // were you able to make m Bouquets?
28    }
29
30    int minDays(vector<int> &bloomDay, int m, int k)
31    {
32        long long int requirement = (long long int)m * (long long int)k;
33        if (bloomDay.size() < requirement)
34            return -1;
35
36        int start = *min_element(bloomDay.begin(), bloomDay.end()); // at least 1 flower is bloomed
37        int end = *max_element(bloomDay.begin(), bloomDay.end());   // all flowers are bloomed, pkka bna lunga
38        int ans = 0;
39        while (start <= end)
40        {
41            int mid = (start + end) >> 1;
42            int day = mid;
43            if (canWeMakeMBouquetsWithDDays(bloomDay, m, k, day))
44            {
45                ans = mid;
46                end = mid - 1;
47            }
48            else
49                start = mid + 1;
50        }
51        return ans;
52    }
53};