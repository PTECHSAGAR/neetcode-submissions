class Solution {
public:

    string encode(vector<string>& strs) {
    string res="";
    for(string s:strs){
        res+=to_string(s.size())+"#"+s;
    }
    return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.length()){
            string lenS="";
            while(s[i]!='#'){
                lenS+=s[i];
                i++;
            }
            int len=stoi(lenS);
            i++;
            string word=s.substr(i,len);
            res.push_back(word);
            i+=len;
        }
     return res;
    }
};
