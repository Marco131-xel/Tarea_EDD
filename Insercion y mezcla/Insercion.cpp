#include <iostream>
using namespace std;

int main() {
    int numeros[] = {9, 7, 8, 5, 6};
    int i, posicionActual, valorPosicion;

    // Algoritmo de ordenamiento por inserción
    for (i = 1; i < 5; i++) { // Comienza desde el segundo elemento
        valorPosicion = numeros[i]; // Guarda el valor actual
        posicionActual = i; // Guarda la posición actual

        // Mueve los elementos del arreglo que son mayores que el valor actual
        // a una posición adelante de su posición actual
        while (posicionActual > 0 && numeros[posicionActual - 1] > valorPosicion) {
            numeros[posicionActual] = numeros[posicionActual - 1];
            posicionActual--;
        }
        numeros[posicionActual] = valorPosicion; // Inserta el valor en la posición correcta
    }

    // Imprime el arreglo ordenado
    cout << "Ordenamiento Ascendente: ";
    for (i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    cout << endl;

    // Pausa la consola antes de salir
    system("pause");
    return 0;
}
