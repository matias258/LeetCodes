class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> counts;
        //creamos el map de s.
        for (int i = 0; i < s.size(); i++){
            if (counts.find(s[i]) != counts.end()){
                //la clave existe
                counts[s[i]] ++;

            }
            else{
                //la clave no existe
                counts[s[i]] = 1;
            }
        }

        //ayudemonos del map de s para ver si t es anagrama.
        for (int i = 0; i < t.size(); i++){
            if (counts.find(t[i]) != counts.end()){
                //la clave existe, le restamos 1.
                counts[t[i]] --;

            }
            
        }

        bool sonAna = true; 
        int k = 0;
        while(k < counts.size()){
            if (counts[k] == 0){
                k++;
            }
            else{
                return false;
            }
        }

        return true;


    }
};
