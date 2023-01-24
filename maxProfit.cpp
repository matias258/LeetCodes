class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minVal = INT_MAX;
        int maxProf = 0;
        
        for (int i = 0; i < prices.size(); i++){
            minVal = min(minVal, prices[i]);
            maxProf = max(maxProf, prices[i] - minVal);
        }

        if (maxProf <= 0){
            return 0;
        }

        return maxProf;
    }
};
