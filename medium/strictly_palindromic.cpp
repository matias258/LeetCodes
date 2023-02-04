class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        //si la base i de n no es palindromo, entonces es falso
        for (int i = 2; i < n -1 ; i++){
            if (!esPalindromo(NbaseX(i, n))){
                return false;
            }
        }
        return true;

    }

    //Creamos una funcion que nos calcula la base i del numero n
    string NbaseX(int x, int n){

        string res;
        while (n > 0){
            res = to_string(n % x) + res;
            n /= x;
        }
        return res;
    }

    //Luego otra que en el futuro nos va a decir si esa base es palindromo o no
    bool esPalindromo(string p){
        for (int i = 0; i < p.size(); i++){
            if ( p[i] != p[p.size() - 1 - i]){
                return false;
            }
        }
        return true;
    }
};

