1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4    
5        double k = celsius + 273.15;
6        double f = celsius * 1.80 + 32.00;
7        vector<double>v;
8        v.push_back(k);
9        v.push_back(f);
10        return v;
11        
12    }
13};