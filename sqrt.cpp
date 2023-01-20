class Solution {
public:
    int mySqrt(int x) {
        if (x == 0){
            return 0;
        }

        long long i = 1;
        //long long is a datatype like int but it stores higher values, so it doesnt overload
        while (i * i != x){
            if ((i+1) * (i+1) > x){
                return i;
            }
            i++;
        }
        return i;

    }
};
