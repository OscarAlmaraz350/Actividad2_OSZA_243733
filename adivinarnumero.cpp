#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
int numero, dato, i =0;
    srand(time(NULL));
    dato = 1 + rand()%(100);
    do{
        cout<<"Ponga un numero y adivinelo: "; cin>>numero;
        if (numero > dato){
            cout<<"\nPonga otro numero menor \n";
        }
        if (numero <dato){
            cout<<"\nPonga un numero mayor \n";
        }
        i++;
        }while (numero !=dato);
        cout<<"\nFelicidades! Acertó el número\n";
        cout<<"Intentó adivinarlo: "<<i<<endl;
        system("pause");
         return 0;
    }