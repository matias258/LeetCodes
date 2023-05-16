class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> par;
        vector<int> impar;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] % 2 != 0){
                impar.push_back(nums[i]);
            }
            else{
                par.push_back(nums[i]);
            }
        }

        res.insert(res.begin(), par.begin(), par.end());
        res.insert(res.end(), impar.begin(), impar.end());

        return res;
    }
};
