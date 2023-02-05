class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // caso base, s = ""
        if (s.size() == 0){
            return 0;
        }

        int longest = 1;

        //Uso sinRepe para buscar cual de todas las sinRepe es la mas larga
        for (int j = 0; j < s.size()-1; j++){
            if (longest < sinRepe(j, s)){
                longest = sinRepe(j, s);
            }
        }
        return longest;

    }

    //me creo una funcion que me devuelve los repetidos del string s dado un indice
    int sinRepe (int x, string s){

        map <char, int> mapa;
        int repe = 0;
        int i = x;
        while (i < s.size()){
            if (mapa.count(s[i]) == 0){
                mapa[s[i]] = 1;
                repe ++;
                i++;
            }
            else{
                break;
            }
        }
        return repe;
    }
};
