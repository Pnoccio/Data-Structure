#include <iostream>
using namespace std;
int main(){
    int x;
    int a;
    int i;
    int b;

    cout<<"Please enter the appropriate array length";
    cin>>x;

        for ( i = 1; i <= a; i++)
        {
            for (int x = a-i; x > 0; x--)
            {
                cout<<" ";
            }
            for (int b = 1; b <= i; b++)
            {
                cout<<"*";
            }
            cout<<endl;   
        }
        return 0;
}