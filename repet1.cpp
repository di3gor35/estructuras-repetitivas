#include <iostream>
using namespace std;

/*
    *Funcion para validar la respuesta del usuario y devolver el valor esperado
    *Parametros:
    *   op: Tipo de validacion
    *Retorno:
    *   1: Si la respuesta de opcion es si
    *   0: Si la respuesta de opcion es no
    *   n: Si la respuesta de opcion es un numero de gastos
    *Descripcion:
    *   Esta funcion valida la respuesta del usuario y devuelve el valor esperado
    *Tipos de validacion:
    *   Nuevos gastos: (1)
    *   Nuevo calculo de gastos: (2)
    *   Numero de gastos: (3)
*/

int Validar_Respuesta(int op){
    int r;
    bool r2;
    if(op == 1){
        do {
            cout << "Desea anadir gastos? (1: si/ 0: no): ", cin >> r; 
            if (r == 1 || r == 0){
                r2 = true;
            }
            else {
                cout << "Opcion no valida" << endl;
                r2 = false;
            }
        } while (r2 == false);
    } else if (op == 2){
        do {
            cout << "Desea calcular otra cantidad de gastos? (1: si/ 0: no): ", cin >> r;
            if (r == 0 || r == 1){
	        	r2 = true;
	        }
	        else {
	        	cout << "Opcion no valida" << endl;
	        	r2 = false;
	        }
        } while (r2 == false);
    } else if (op == 3){
        do {
            cout << "Ingrese el numero de gastos: ", cin >> r;
            if (r > 0){
	        	r2 = true;
	        }
	        else {
	        	cout << "Error, el numero de gastos debe ser mayor que cero" << endl;
	        	r2 = false;
	        }
        } while (r2 == false);
    }
    return r;
}

int main(){
    int n;
    int res;
    int gasto;
    int suma = 0;
    int res2;
    // Bienvenida al programa
    cout << "Bienvenido al programa, para calcular el gasto total" << endl;
    // * Bucle principal
    do {
        n = Validar_Respuesta(3);
        for (int i = 1; i <= n; i++){
            cout << "Ingrese el gasto " << i << ": ", cin >> gasto;
            suma += gasto;
        }
        res = Validar_Respuesta(1);
        while (res == 1){
            n++;
            cout << "Ingrese el gasto " << n << ": ", cin >> gasto;
            suma += gasto;
            res = Validar_Respuesta(1);
        }
        cout << "El total de gastos es: " << suma << " y la cantidad de gastos ingresados son: " << n << endl;
        res2 = Validar_Respuesta(2);
        suma = 0;
    } while (res2 == 1);
    return 0;
}