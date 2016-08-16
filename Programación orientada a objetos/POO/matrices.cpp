#include<iostream>

using namespace std;

int main()
{
    int nr = 2;  //n'umero de renglones
    int nc = 2;  //n'umero de columnas
    
    // Definici'on de la matriz usando apuntadores
    int ** mat;
    
    //reservar renglones para la matriz
    mat = new int*[nr];
    
    //reservar columnas (arreglo de cada rengl'on)
    for(int i=0; i<nr; i++)
        mat[i] = new int[nc];
    
    //acceso a la matriz usando notaci'on de arreglos (esto puede ser con ciclos)
    mat[0][0] = 99;
    mat[0][1] = 22;
    mat[1][0] = 44;
    mat[1][1] = 43;
    
    //imprimir (puede ser con ciclos)
    cout << mat[0][0] << " " << mat[0][1] << endl << mat[1][0] << " " << mat[1][1] <<endl <<endl;
    
    // Ahora voy a acceder a los elementos de la matriz
    // utilizando aritmética de apuntadores
    
    *(*(mat+0)+0) = 10;   //equivalente a mat[0][0]=10
    *(*(mat+0)+1) = 20;   //equivalente a mat[0][1]=10
    *(*(mat+1)+0) = 30;   //equivalente a mat[1][0]=10
    *(*(mat+1)+1) = 40;   //equivalente a mat[0][1]=10
    
    cout << *(*(mat+0)+0) << " " << *(*(mat+0)+1) << endl << *(*(mat+1)+0) << " " << *(*(mat+1)+1);
    
    
    return 0;
}