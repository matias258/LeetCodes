class Solution {
public:
    string reverseVowels(string s) {
        string reverseVoc;
        for (int i = s.size()-1; i >= 0; i--){
            if (esVocal(s[i])){
                reverseVoc.push_back(s[i]);
            }        
        }
        int c = 0;
        for (int i = 0; i < s.size(); i++){
            if (esVocal(s[i])){
                s[i] = reverseVoc[c];
                c++;
            }
        }
        return s;

    }

    bool esVocal(char c){
        string vocales="aeiouAEIOU";
        for (int i = 0; i < vocales.size(); i++){
            if (c == vocales[i]){
                return true;
            }
        }
        return false;
    }
};
