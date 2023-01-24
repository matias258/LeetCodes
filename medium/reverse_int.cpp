class Solution {
public:
    int reverse(int x) {
        
        string num_str = to_string(x);
        std::reverse(num_str.begin(), num_str.end());
        try{
            int num_inv = stoi(num_str); //stoi : String to integer
            if (x < 0){
                return -num_inv;
            }
            return num_inv;
        }
        

        catch (const std::out_of_range& e){
            return 0;
        }
        
    }
};

/* el try se fija si el codigo da overflow. Si da, entonces el catch retorna 0
   Sino, retornamos lo que debamos retornar 
*/

