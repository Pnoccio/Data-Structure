//kadane algorithm
#include <iostream>
using namespace std;

int main(){

    int num[] = {-3,1,-8,12,0,-3,5,-9,4};

    int max_so_far = 0;
    int max_ending_here = 0;

    for (int i = 0; i < 9; i++)
    {
        max_ending_here = max_ending_here + num[i];

        if (max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }

        else if (max_ending_here < 0){
            max_ending_here = 0;
        }

    }

    cout << max_so_far <<endl;

    return max_so_far;
    
}