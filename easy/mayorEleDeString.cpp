class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int> map;

        //creo un map que guarda los nums y sus repeticiones
        for (int i = 0; i < nums.size(); i++){
            if (map.count(nums[i]) == 0){
                map[nums[i]] = 1;
            }
            else{
                map[nums[i]]++;
            }
        }

        //busco la mayor cantidad de repeticiones, y
        //basandome en eso encuentro el value buscado
        int value = nums[0];
        int repe = 0;

        // "const" garantiza que no se puede modificar "cosa" dentro del ciclo
        // "auto" permite que el compilador determine el tipo de variable "cosa"
        // "&" es pasar por referencia
        // "first" es la clave y "second" el significado 
        for (const auto &cosa : map){
            if (cosa.second > repe){
                repe = cosa.second;
                value = cosa.first;
            }
        }

        return value;
    }
};
