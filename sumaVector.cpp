class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums.size(); j++){
                // Loopeamos j e i para ir comparando las posibles sumas
                if (nums[i] + nums[j] == target && j != i){
                    // Si j != i y la suma da lo que queremos, devolvemos los indices de la solucion
                    vector<int> suma;
                    suma.push_back(j);
                    suma.push_back(i);
                    return suma;
                }
            }
        }
        // Sino, devolvemos <0,0>, que es un vecor invalido para este caso, ya que tenemos como   
        // premisa que existe al menos 1 solucion.
        vector<int> res;
        res.push_back(0);
        res.push_back(0);
        return res;
    }
};

// Ahora, si quisieramos bajar la complejidad, podriamos usar un diccionario. Pero al no estar muy familiarizado con esto, decidi no arriesgarme. :)
