class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }

        int first = INT_MAX;  // Smallest number encountered so far
        int second = INT_MAX; // Second smallest number encountered so far

        for (int i = 0; i < n; i++) {
            if (nums[i] <= first) {
                first = nums[i];
            } else if (nums[i] <= second) {
                second = nums[i];
            } else {
                // We found a number greater than both first and second
                return true;
            }
        }

        return false;
    }
};
