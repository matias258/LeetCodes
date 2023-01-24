class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Base case, if size == 1 //
        if (digits.size() == 1 && digits[0] != 9){
            digits[0]++;
            return digits;
        }
        if (digits.size() == 1 && digits[0] == 9){
            return {1,0};
        }
        
        for(int i = digits.size()-1; i>=0; i--){
            if(digits[i] != 9) {
                digits[i]++;
                return digits;
            }  
            else {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
    
    
};
