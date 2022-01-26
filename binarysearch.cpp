#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0; 
    int end = size;
    int counter = 0;
    while (start <= end)
    {
        counter ++;
        int mid = (start + end) / 2;
        if (arr[mid] == key){
            cout <<"Binary search iterations: " << counter << endl;
            return mid;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}