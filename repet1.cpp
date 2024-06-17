#include <iostream>
using namespace std;

int main(){
    int n;
    int res;
    int gasto;
    int suma = 0;
    float res2;
    // Bienvenida al programa
    cout << "Bienvenido al programa, para calcular el gasto total" << endl;
    // * Bucle principal
    do {
        cout << "Ingrese el numero de gastos: ", cin >> n;
        if (n <= 0){
            cout << "Error, el numero de gastos debe ser mayor que cero" << endl;
            return 1;
        }
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
        cout << "El total de gastos es: " << suma << " y la cantidad de gastos ingresados son: " << n << endl;
        cout << "Desea calcular otra cantidad de gastos? (1: si/ 0: no): ", cin >> res2;
        suma = 0;
    } while (res2 == 1);
    return 0;
}