#include <iostream>
using namespace std;

int main(){
    int n;
    int res;
    int gasto;
    int suma = 0;
    cout << "Bienvenido al programa, para calcular el gasto total" << endl;
    cout << "Ingrese el numero de gastos: ", cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "Ingrese el gasto " << i << ": ", cin >> gasto;
        suma += gasto;
    }
    cout << "Desea anadir gastos? (1: si/ 0: no): ", cin >> res; 
    while (res == 1){
        n++;
        cout << "Ingrese el gasto " << n << ": ", cin >> gasto;
        suma += gasto;
        cout << "Desea anadir gastos? (1: si/ 0: no): ", cin >> res;
    }
    cout << "El total de gastos es: " << suma << " y la cantidad de gastos ingresados son: " << n;
    return 0;
}