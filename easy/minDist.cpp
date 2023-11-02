#include <iostream>
#include <cmath>
using namespace std;


int minDist(int a[], int n, int x, int y) {
    // code here
    bool estax = false;
    bool estay = false;
    int xactual = n+1;
    int yactual = -n-1;
    int dist = n;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            estax = true;
            xactual = i;
        }
        if(a[i] == y){
            estay = true;
            yactual = i;
        }
        if(dist > abs(xactual - yactual)){
            dist = abs(xactual - yactual);
        }
    }
    if (estax && estay == true){
        return dist;
    }
    return -1;
}



int main()
{
    int a[] = {5, 3, 1, 8, 3, 23, 2};
    int r = minDist(a, 7, 5, 2);
    return r;
}
