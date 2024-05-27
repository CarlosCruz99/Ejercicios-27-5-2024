#include <iostream>
using namespace std;
int main(){
    int n=0, j=0, par2=0;
    cout<<"Ingrese el tamano del arreglo: \n";
    cin>>n;
    int par[n], num[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese el numero: "<<i<<"\n";
        cin>>num[i];
        par2=num[i]%2;
        if(par2!=0){
            par[j]=num[i];
            j++;
        }
    }
    cout<<"El arreglo original es: \n";
    for(int i=0; i<n; i++){
        cout<<num[i]<<" "; 
    }
    cout<<"\n";
    cout<<"El arreglo de los impares es: \n";
    for(int i=0; i<j; i++){
        cout<<par[i]<<" ";
    }
    return 0;
}