class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == k){
                    c++;
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);
                    i -= 1;
                    break;
                }              
            }           
        }
        return c;
    }
};


/* la eficiencia te la debo */
