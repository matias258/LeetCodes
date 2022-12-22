#include <vector>
#include <iostream>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int m = (left + right) / 2;

        if ( left >= right){
            if (nums[left] == target){
                return left;
            }
            else{
                return -1;
            }
        }
        if (target == nums[m]){
            return m;
        }
        if (target < m){
            right = m;
            m = (left + m) / 2;
            vector<int> v;
            for (int i = 0; i < m; i++){
                v.push_back(nums[i]);
            }
            return search(v, target);
        }
        if (target > m){
            left = m;
            m = (m + right) / 2;
            
            vector<int> r;
            for (int i = m; i <= right; i++){
                r.push_back(nums[i]);
            }
            return search(r, target);
        }
        return -1;
        

    }
    
};