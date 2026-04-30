1class Solution {
2public:
3unordered_map<int,bool> rowcheck;
4unordered_map<int,bool>lowerdiagonalcheck;
5unordered_map<int,bool>upperdiagonalcheck;
6void storesolution(vector<vector<string>>&ans,vector<vector<char>>&board,int n){
7    vector<string> tempAns;
8    for(int i=0; i<n; i++){
9        string output = "";
10        for(int j=0; j<n; j++){
11            output.push_back(board[i][j]);
12
13        }
14        //string is ready 
15        tempAns.push_back(output);
16    }
17    //vector of the string is ready
18    ans.push_back(tempAns);
19}
20bool issafe(int row, int col, vector<vector<char>> &board){
21    //brute for -> traverese the board -> tc = n^2
22    // check for the linear search 
23    //for row check 
24    if(rowcheck[row] == true){
25        //not safe 
26        return false;
27    }
28
29    //check upper diagonal
30    if(upperdiagonalcheck[row-col]==true){
31        return false;
32    }
33    //chechk the lower diagonal 
34    if(lowerdiagonalcheck[row+col] == true){
35        //not safe 
36        return false;
37    }
38    //else safe to place 
39    return true;
40}
41
42void solve(int n, vector<vector<char>> &board, vector<vector<string>> &ans, int col){
43if(col>=n){
44    //all queen are placed
45    // store board arrangemnet in the ans 
46    storesolution(ans,board,n);
47    return ;}
48    //here we use recuresion concept 
49    for(int row=0; row<n; row++){
50        //har row pe queen ko place kar ke dekhenge 
51        if(issafe(row,col,board)){
52            board[row][col] = 'Q';
53            rowcheck[row] = true;
54            lowerdiagonalcheck[row+col] = true;
55            upperdiagonalcheck[row-col] = true;
56            //baki ko sambhaega recureion
57            solve(n,board,ans,col+1);
58            //back tracking 
59            board[row][col] = '.';
60            rowcheck[row] = false;
61            lowerdiagonalcheck[row+col] = false;
62            upperdiagonalcheck[row-col] = false;
63        }
64    }
65}
66    vector<vector<string>> solveNQueens(int n) {
67        vector<vector<string>>ans; //for return the ans 
68        vector<vector<char>>board(n, vector<char>(n,'.'));//board 
69        //starting placing queen with ot column
70        int col = 0;
71        solve(n,board,ans,col);
72        return ans;
73
74        
75    }
76};