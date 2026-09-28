1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int>ans;
5        int m = matrix.size();
6        int n = matrix[0].size();
7        int total_element = m*n;
8
9        int startingrow = 0;
10        int startingcolumn = 0;
11        int endingrow = m-1;
12        int endingcolumn = n-1;
13
14        int count = 0;
15        while(count<total_element){
16     // print starting row 
17     for(int i=startingcolumn; i<=endingcolumn && count<total_element; i++){
18        ans.push_back(matrix[startingrow][i]);
19        count++;
20     }
21     startingrow++;
22
23     //print ending column 
24     for(int i=startingrow; i<=endingrow && count<total_element; i++){
25        ans.push_back(matrix[i][endingcolumn]);
26        count++;
27     }
28     endingcolumn--;
29     //print ending row
30     for(int i=endingcolumn; i>=startingcolumn && count<total_element; i--){
31          ans.push_back(matrix[endingrow][i]);
32          count++;
33     }
34     endingrow--;
35     //print starting column 
36     for(int i=endingrow; i>=startingrow && count<total_element; i--){
37        ans.push_back(matrix[i][startingcolumn]);
38        count++;
39     }
40     startingcolumn++;
41
42        }
43        return ans;
44    }
45};