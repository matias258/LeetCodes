class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        nums = OrdenarCreciente(nums);
        vector<int> res;
        for (int i = 0; i < queries.size(); i++){

            int sumatoria = 0;
            int length = 0;

        
            for (int k = 0; k < nums.size() && sumatoria <= queries[i]; k++){
                sumatoria = sumatoria + nums[k];
                length ++;
                if (k + 1 == nums.size() && sumatoria <= queries[i]){
                    length++;
                }

            }
            
            res.push_back(length - 1);
        }
        return res;
        

    }

   
//puedo ordenar crecientemente nums, asi luego puedo ver cuanto es la max longitud que puede tener un sub vector tal que sea <= al termino que estemos buscando de las queries. Y luego el resultado de ese tamaño, retornarlo.


// aca ordenar usando insertion sort o algun sorting facil xq soy malisimo
    vector<int> OrdenarCreciente(vector<int>& nums){
        
        for (int i=0; i < size(nums) - 1; i++){
        
            int menor = nums[i];
            int indMen = i;
            for (int j = i + 1; j < size(nums); j++){
                if (nums[j] <= menor){
                    menor = nums[j];
                    indMen = j;
                }
            }
            swap(nums[i], nums[indMen]);
        }
        return nums;
    }
    
};
