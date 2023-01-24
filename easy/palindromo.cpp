class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        else{
            if ( numero_a_vector(x) == reverse_vector(numero_a_vector(x))){
                return true;
            }
            else{
                return false;
            }
        }
    }

    vector<int> numero_a_vector(int n){
        vector<int> v;
        while( n > 0){
            v.push_back(n % 10);
            n /= 10;
        }
        return v;
    }

    vector<int> reverse_vector(vector<int> v){
        vector<int> res;
        for (int i = v.size() - 1; i >= 0; i--){
            res.push_back(v[i]);
        }
        return res;
    }
};
