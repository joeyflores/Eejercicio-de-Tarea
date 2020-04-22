#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Ingrese un numero: ";cin>>x;
    while(x!=0){
        cout<<x%10<<" ";
        x=x/10;
    }
    return 0;
}
