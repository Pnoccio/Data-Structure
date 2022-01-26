#include <iostream>

using namespace std;

int main(){
    int x;
    int i;
    int a;
    cout<<"Please enter the appropriate array length";
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        for (int a = 0; a < x; a++)
        {
            if (i <= a)
            {
                cout<<"*";
            }else{
                cout<<"";
            }
            
        }
        cout<<endl;
        
    }
    return 0;
}