#include<iostream>
using namespace std;

// la siguiente funci'on duplica cada uno de los valores de la matriz que recibe como par'ametro
/* Ejemplo:    Dada la siguiente matriz
                10 30
                20 40
            Una vez que pasamos la matriz por la funci'on duplica matriz, el resultado es:
                20 60
                40 80
                */
void duplicaMatriz(int** mat, int nr, int nc);

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
    //LLenamos la matriz
    mat[0][0] = 99;
    mat[0][1] = 22;
    mat[1][0] = 44;
    mat[1][1] = 43;
    //imprimimos la matriz
    cout << mat[0][0] << " " << mat[0][1] << endl << mat[1][0] << " " << mat[1][1] <<endl <<endl;
    
    // llamamos la funci'on duplica
    duplicaMatriz(mat, nr, nc);
    
    //imprimimos la matriz
    cout << *(*(mat+0)+0) << " " << *(*(mat+0)+1) << endl << *(*(mat+1)+0) << " " << *(*(mat+1)+1);
    
    return 0;   
}


void duplicaMatriz(int** mat, int nr, int nc)
{
    for(int i=0; i<nr; i++)
    {
        for(int j=0; j<nc; j++)
        {
            *(*(mat+j)+i) = *(*(mat+j)+i) * 2;
            // mat[i][j] = mat[i][j] * 2;    // Equivalente a la l'inea anterior
        }
    }
}