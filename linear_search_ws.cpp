/*#include <iostream>
using namespace std;

int linearSearch( int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if (arr[i] == key){
            cout << "linear search iteration is : " << i << endl;
            return i;
        }
    }
    return -1;
}

int main(){
    string str1[20] = "In computer science";
    string str2[20] = "a linear search";
    string str3[20] = "algorithm or";
    string str4[20] = "sequential search";
    string str5[20] = "is a method for";
    string str6[20] = "finding an element";
    string str7[20] = "within a list";

    cout << "str1 + str2 + str3 + str4 + str5 + str6 + str7" << str1  << endl;
} */


//a linear search algorithm or sequential search is a method for finding an element within a list



#include <iostream>
  using namespace std;
void linearSearch(string a[], string n) {
  int index = -1;
  string found;
  for (int i = 0; i < 4; i++) {
    if (a[i] == n) {
      cout << "Element found at position: " << i + 1 << endl;
      index = 0;
    //   break;
    }
  }
  if (index == -1) {
    cout << "No Element Found" << endl;
  }
}


int main() {
  string arr[4];
  cout << "Please enter elements of the Array" << endl;
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
  }
  cout << "Please enter an element to search" << endl;
  string x;
  cin >> x;
  linearSearch(arr, x);
  return 0;
}


// In computer science a linear search algorithm or sequential search is a method for finding an element within a list