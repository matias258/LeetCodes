class Solution {
public:
    int lengthOfLastWord(string s) {
        string p;
        for (int i = s.size()-1; i >= 0; i--){
            if (s[i] != ' '){
                p.push_back(s[i]);
            }
            else{
                //case if we finish the last word and we get to a space ' '
                
                // s[i] == ' '         --> we get to a space
                // i + 1 <= s.size()-1 --> the i before the one we loop is on range
                // s[i+1] != ' '       --> the i before the one we loop is a letter

                if (s[i] == ' ' && i + 1 <= s.size()-1 && s[i+1] != ' '){
                    break;
                }
            }
            
        }
        return p.size();
    }
};
