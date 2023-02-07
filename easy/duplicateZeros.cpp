class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int arrSizeInit = arr.size();           //array size original
        int inserted = 0;
        for (int i = 0; i < arr.size(); i++){   
            
            if (arr[i] == 0){                   //si es 0, agrego otro al lado
                arr.insert(arr.begin() + i, 0); // y salteo un indice (para no calcular el 0 que corri)
                inserted++;
                i = i + 1;
            }
        }
        arr.erase(arr.begin() + arrSizeInit, arr.end());  //elimino el resto que es mas grande que el
                                                          // array size original

    }
};
