1class Solution {
2public:
3    bool checkpalindrome( string str, int s, int e){
4        while(s<=e){
5            if (str[s] == str[e]){
6                s++;
7                e--;
8            }
9            else{
10                return false;
11            }
12        }
13        return true;
14    }
15
16    bool validPalindrome(string s) {
17        int len = s.length();
18        int i = 0;
19        int j = len - 1;
20        while( i<=j ){
21            //when elemnet are same 
22            if ( s[i] == s[j] ){
23                i++;
24                j--;
25            }
26            //when the elemnet are not same so here we delet and check
27            //here we have to place where we delet ith and jth
28            else{
29                //delet ith index and check 
30                bool ansone = checkpalindrome(s,i+1,j);
31                //delet j th index and check 
32                bool anstwo = checkpalindrome(s,i,j-1);
33                bool finalans = ansone || anstwo;
34                return finalans;
35
36            }
37        }
38        //if while loop complete that mean sting is palindrome without any deletion 
39       return true;
40        
41    }
42};