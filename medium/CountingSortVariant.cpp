class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> rep;
        int min = nums[0];
        int max = nums[0];
	
	//busco minimos y maximos
        for (int i = 0; i < nums.size(); i++){
            if (min > nums[i]){
                min = nums[i];
            }
            if (max < nums[i]){
                max = nums[i];
            }
        }

	//lleno el map con 0s en el rango de valores
	// que tiene nums
        for (int r = min; r <= max; r++){
            rep[r] = 0;
        }

	// si aparece, guardo su repeticion
        for (int k = 0; k < nums.size(); k++){
            rep[nums[k]]++;
        }

        vector<int> v;

	//itero y devuelvo repeticiones de las claves 
	//las repeticiones estan guardadas en el significado
        for (auto it = rep.begin(); it != rep.end(); it++){
            if (it->second > 0){
                for (int i = 0; i < it->second; i++) { 
                    v.push_back(it->first);
                }
            }
        }

        return v;
    }
};


//Complejidades:
// Espacial -> O(n) -> las 2 estructuras de datos adicionales que utilizo tienen tamaño maximo O(n) ("rep" y "v")

// Temporal -> O(n*log(n)) -> Para mi sorpresa, empece implementando Counting Sort pero como utilice un map en vez de un array para guardar las repeticiones, esto se vuelve mas eficiente. Entonces termine implementando algo que es mas eficiente que a lo que queria llegar.


