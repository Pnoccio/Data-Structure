#include <iostream>
using namespace std;
int binarySearch(float arr[], float left, float right, float x) {
    while (left < right) {
        float mid = (left + right) / 2;
        if (x > arr[mid]) {
          left =  mid +1;
        } else {
          right = mid;
        } 
    }
    if (arr[left] == x) 
      return left;
    else
      return -1;
}


int main() {
    float myarr[10];
    int num;
    int output;
    cout << "Please enter 10 elements ASCENDING order" << endl;
    for (int i = 0; i < 10; i++) {
    cin >> myarr[i];
}
    cout << "Please enter an element to search" << endl;
    cin >> num;
    output = binarySearch(myarr, 0, 9, num);
    if (output == -1) {
    cout << "No Match Found" << endl;
} else {
    cout << "Match found at position: " << output << endl;
}
    return 0;
}

// {100.23, 1003.55, 2005.10, 4444.50, 5123.75, 6543.60}. 
