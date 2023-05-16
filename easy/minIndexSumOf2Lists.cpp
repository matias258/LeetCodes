class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector<pair<string, int>> common;

        // agrego los strings en comun y su suma de indice en "common"
        for (int i = 0; i < list1.size(); i++){
            for (int j = 0; j < list2.size(); j++){
                if (list1[i] == list2[j]){
                    common.push_back(make_pair(list1[i], i + j));
                }
            }
        }
        vector<string> res;

        // busco el minimo valor de la tupla de index de "common"
        int min = INT_MAX;
        string actual = "";
        for (int k = 0; k < common.size(); k++){
            if (common[k].second < min){
                min = common[k].second;
            }
        }

        // ahora que tengo el minimo valor, busco todos los index que valgan eso
        for (int l = 0; l < common.size(); l++){
            if (min == common[l].second){
                res.push_back(common[l].first);
            }
        }

        return res;
    }
};


