#include <iostream>
using namespace std;
int main(){
    int x; 
    cout<<"Please enter the appropriate array length";
    cin>>x;

    for (int i=0; i<x; i++){
        for (int a=0; a<x; a++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}