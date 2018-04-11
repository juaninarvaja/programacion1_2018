#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    int esUnEntero(char*);

int main()
{
    char numero[4000];
    int validacion;

    printf("ingrese un numero");
    gets(numero);
    validacion= esUnEntero(numero);

   if(validacion == 0){
    printf("no es un entero");
   }
    return 0;

}

int esUnEntero(char *cadena)
{
    int i =0;

    while( cadena[i] != '\0')
    {
        if(cadena[i] < '0'  || cadena[i] > '9')
          return 0;
        i++;

    }
    return 1;
}


