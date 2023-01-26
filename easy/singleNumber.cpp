class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int, int> dicc;

        /* guardo los diferentes valores en claves 
           y las repeticiones en significados */
        for (int i = 0; i < nums.size(); i++){
            if (dicc.count(nums[i]) == 0){
                dicc[nums[i]] = 1;
            }
            else{
                dicc[nums[i]]++;
            }

        /* me fijo que clave tiene solo 1 repeticion */
        }
        for (auto it = dicc.begin(); it != dicc.end(); it++){
            if (it->second == 1){
                return it->first;
                break;
            }
        }
        return 0;
    }
};
