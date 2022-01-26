#include <iostream>
  using namespace std;

void insertionSort(int a[]) {
  for (int i = 1; i < 5; i++) {
    int j=i;
    int t=a[j];
    while (j > 0 && t<a[j-1]) {
	a[j] = a[j-1];
	j--;
	}
     a[j]=t;
    }
  }


int main() {
  int myarray[5];
  int size;
  cout << "Enter 5 integers in any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  insertionSort(myarray); // sorting

  cout << endl << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}
