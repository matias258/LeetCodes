class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //Decidi implementarlo usando Counting Sort para que la complejidad
        //me quede en O(n)

        vector<int> aux(nums.size(), 0);  //largo n, inicializado con 0s
        vector<int> ordenado;
        vector<int> res;
        
        //obtengo la ctidad de repeticiones de cada numero en aux
        for (int i = 0; i < nums.size(); i++){
            aux[nums[i]-1] ++;
        }

        // devuelvo el vector ordenado en "ordenado" sin repeticiones
        for (int i = 0; i < aux.size(); i++){
            if (aux[i] >= 1){
                ordenado.push_back(i+1);
            }
            else{
                ordenado.push_back(-1);
            }
        }

        for (int i = 0; i < ordenado.size(); i++){
            if (ordenado[i] != (i+1)){
                res.push_back(i+1);
            }
        }
        return res;
    }
};
