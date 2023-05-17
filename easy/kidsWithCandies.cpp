class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> res;
        //Busco el maximo del array
        for (int i = 0; i < candies.size(); i++){
            if (max < candies[i]){
                max = candies[i];
            }
        }
        for (int j = 0; j < candies.size(); j++){
            if (candies[j] + extraCandies >= max){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};
