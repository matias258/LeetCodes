class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        if (word1.size() == word2.size()){
            for (int i = 0; i < word1.size(); i++){
                res.push_back(word1[i]);
                res.push_back(word2[i]);                
            }
            return res;
        }
        else if(word1.size() > word2.size()){
            for (int j = 0; j < word1.size(); j++){
                if (j >= word2.size()){
                    res.push_back(word1[j]);
                }
                else{
                    res.push_back(word1[j]);
                    res.push_back(word2[j]);
                }
            }
            return res;
        }
        else{
            for (int j = 0; j < word2.size(); j++){
                if (j >= word1.size()){
                    res.push_back(word2[j]);
                }
                else{
                    res.push_back(word1[j]);
                    res.push_back(word2[j]);
                }
            }
            return res;
        }
    }
};
