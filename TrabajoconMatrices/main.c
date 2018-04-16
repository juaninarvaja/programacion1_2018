#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void funcionImprimirMayuscula(char matriz[][20], int filas);
void imprimirAlfabeticamente(char matriz[][20], int filas);

int main()
{
   char nombres[5][20] = {"juan CARLOS ", "jose", "jorge", "maTias", "negro"};

   funcionImprimirMayuscula(nombres, 5);

    return 0;

}




void funcionImprimirMayuscula(char matriz[][20] , int filas)
{
int  i,k;

    for(i =0; i<filas; i++)
    {
        strlwr(matriz[i]);
        for(k =0; k < 20; k++)
        {
        if(matriz[i][k] == ' ')
            {
            matriz[i][k+1] = toupper(matriz[i][k+1]);
            }
        matriz[i][0] = toupper(matriz[i][0]);

        }
        printf("%s \n" , matriz[i]);
    }
}



