#include <iostream>

using namespace std;

int main(){
  int num[2] = {};
  
  int Average[2];
  int sum;

  for (int i = 0; i < 2; i++)
  {
    sum = 0;
    cout << "Enter Array of number: ";
    cin >> num[i];

    for (int j = 0; j < 2; j++)
    {
      sum = sum + num[j];
      Average[i] = sum/(i + 1);
    }
    cout << Average[i] << endl;
  }
  cout << "good to see you";

  return 0;  
}