#include <iostream>
using namespace std;

int prefixAverage(int *x, int n){
    int s = 0;
    float A[4];
    for(int i = 0; i < n; i++){
        s = s + x[i];
        A[i] = s / (1 + 1);
    }

    for ( j = 0; j < n; j++)
    {
        cout << A[i] << endl;
    }
    return 0;
}

int main(){
    int x[5] = {2,5,3,7,9}
    float n = 4;

    prefixAverage(x, 5);
    return 0;
}