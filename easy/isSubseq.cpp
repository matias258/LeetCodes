class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c = 0;
        int ss = 0;
        for (int j = 0; j < s.size(); j++){
            for (int i = c; i < t.size(); i++){
                if (t[i] == s[j]){
                    c = i + 1;
                    ss++;
                    break;
                }
            }
        }
        if (ss == s.size()){
            return true;
        }
        return false;
        
    }
};
