#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5;
int main()
{
    int datos[N] = {2, 20, 45, 4, 10};
    sort(datos, datos + N);

    cout << "Datos ordenados: ";

    for (int i = 0; i != N; ++i)
        cout << datos[i] << " ";

    return 0;
}