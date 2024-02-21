#include <iostream>

using namespace std;

int posicion(int [], int, int [], int);
int main(){
    int x [] = {8,7,2,5,1};
    int y [] = {3,2,4,8,6};

    // Indice
    int tamanio_x = sizeof(x) / sizeof(x[0]);
    // Dimension
    int tamanio_y = sizeof(y) / sizeof(y[0]);
    cout<<"La posicion es "<< posicion(x, tamanio_x, y, tamanio_y);
    return 0;
}

int posicion(int indice[], int tamanio_x, int dimension[], int tamanio_y){
    int posicion = 0;
    int aux = 0;

    for (int i = 0; i < tamanio_x; i++)
    {
        aux = indice[i];
        if (i+1 < tamanio_y)
        {
            for (int j = i+1; j < tamanio_y; j++)
            {
                aux = aux*dimension[j];
            }
        }
        posicion = posicion + aux;
    }
    return posicion;
}