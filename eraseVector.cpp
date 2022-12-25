class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if (nums.size() == 0){
            return 0;
        }
        if (nums.size() == 1){
            if (nums[0] == val){
                return 0;
            }
            else{
                return 1;
            }
        }

        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            if (nums[i] == val){
                swap(nums[i], nums[j]);
                j--;
            }
            else{
                i++;
            }
        }
        int c = 0;
        for (int k = 0; k < nums.size(); k++){
            if (nums[k] != val){
                c++;
            }
        }
        return c;

    }
};

