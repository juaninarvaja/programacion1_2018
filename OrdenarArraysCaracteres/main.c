#include <stdio.h>
#include <stdlib.h>
#include <string.h>




    /* char palabra[400];
    char segundaPalabra[10];
    int variable;
    int largo;

     printf("ingrese la primer palabra  ");
    fflush(stdin);
    gets(palabra);
    printf("ingrese la segunda palabra  ");
    fflush(stdin);
    scanf("%s", segundaPalabra);

    largo = strlen(palabra);
    printf("primer palabra tiene %d caracteres", largo );
    strcpy(segundaPalabra,palabra);
    printf(" primer palabra %s \n segunda palabra %s ", palabra,segundaPalabra);
     // copio un string en otro, IMPLEMENTACION DE STRCPY

    variable = strcmp(palabra,segundaPalabra);
    if(variable == 1){
        printf("es mayor %s", palabra);
        }
        else if(variable == -1){
        printf("es mayor %s", segundaPalabra);
        }

            else{
                printf("ambas son iguales");
                }
    */


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
