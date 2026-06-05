class Solution {
public:
    bool isAnagram(string s, string t) {
        int f=1;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                f=0;
                break;
            }
        }
        if(f==1){
            return true;
        }else{
            return false;
        }
    }
};
