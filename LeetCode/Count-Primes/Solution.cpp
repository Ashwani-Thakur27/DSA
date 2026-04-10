1class Solution {
2public:
3
4    int countPrimes(int n) {
5        if(n == 0 ) return 0;
6        vector<bool>prime(n,true);//here first we assigned and then we mark all of them as allready all are prime
7        prime[0]=prime[1]=false;
8        int ans = 0;
9        for(int i=2; i<n; i++){
10            if (prime[i]){
11                ans++;
12                int j = 2*i;
13                while (j<n){
14                    prime[j] = false;
15                    j += i;
16                }
17            }
18        }
19        return ans;
20
21    }
22};