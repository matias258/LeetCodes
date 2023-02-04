class Solution {
public:
    bool isPalindrome(string s) {
   
        string s2;
        string t;
        string c;

        for (int k = 0; k < s.size(); k++){
            s2.push_back(tolower(s[k]));
        }

        //isalpha(s[i]) es true solo si s[i] es una letra
        //isdigit(s[i]) es true solo si s[i] es un numero
        for (int i = 0; i < s.size(); i++){
            if (isalpha(s[i]) || isdigit(s[i])){
                c.push_back(s2[i]);
            }
        }
        for (int j = s.size() - 1; j >= 0; j--){
            if (isalpha(s[j])|| isdigit(s[j])){
                t.push_back(s2[j]);
            }
        }

        if (t == c){
            return true;
        }
        return false;

    }
};
