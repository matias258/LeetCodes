class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //Los 1s tiene que estar entre 0s, sino no podemos plantar
        int i = 2;
        int c = 0;
        if (flowerbed[0] == 0){
            if (flowerbed.size() == 1){
                return true;
            }
            else{
                if (flowerbed[1] == 0){
                    c++;                    
                }                
            }
        }
        while(i < flowerbed.size()){
            if (i == flowerbed.size() - 1 && flowerbed[i-1] == 0 && flowerbed[i] == 0){
                    c++;
                    i = i + 2; 
                }
            else if (flowerbed[i] == 0){
                if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0){
                    c++;
                    i = i + 1;
                }          
            }
            i++;
        }
        if (c >= n){
            return true;
        }
        return false;
    }
};
