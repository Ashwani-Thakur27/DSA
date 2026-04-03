1class Solution {
2public:
3    string decodeMessage(string key, string message) {
4        //step 1: create mapping 
5        unordered_map<char,char> mapping;
6        char space = ' ';
7        mapping[space] = space;
8        char start = 'a';
9        int index = 0;
10
11        while(start <= 'z' && index <key.length()){
12            char keykacurrentcharacter = key[index];
13            //start -> mapping abcd
14            //mapping -> keykacurrentcharacter -> alphabet
15            if(mapping.find(keykacurrentcharacter) != mapping.end()){
16                //agar currcharcter ki mapping already present hai 
17                //no need to store any mapping here 
18                //just move to next character in key
19                index++;
20            }
21            else{
22                //already present nahi h
23                //create mappin and move ahead
24                mapping[keykacurrentcharacter] = start;
25                start++;
26                index++;
27            }
28        }
29        //step 2 use mapping and decode msg
30        string ans = "";
31        for(int i = 0; i<message.length(); i++){
32            char msgcharacter = message[i];
33            char mappedcharacter = mapping[msgcharacter];
34            ans.push_back(mappedcharacter);
35        }
36        return ans;
37    }
38};