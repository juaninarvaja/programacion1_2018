#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu(){
int opcion;

system("cls");
printf("1. Alta \n 2. Baja \n 3.Modificacion \n 4.Listar \n 5.Ordenar \n 6. Salir \n");
scanf("%i", &opcion);
while(opcion < 1 || opcion > 6){
    printf("Error! reingrese opcion");
    scanf("%i", &opcion);

}
return opcion;
}

void inicializarPersona(ePersona arrayPersona[], int tamanioArray){
int i;
for(i = 0;i < TAM;i++){
   arrayPersona[i].estado = 0;

}
}



int buscaLibre(ePersona arrayPersona[], int tamanioArray){
int i;
for(i = 0; i < tamanioArray; i++){
   if(arrayPersona[i].estado == 0)
    {

        return i;
        break;
    }
  }
    return -1;
}


eFecha cargarFecha(eFecha auxFecha){
printf("Cargar Fecha de ingreso \n");
printf("dia (numerico) de entrada");
scanf("%d", &auxFecha.dia);
printf("mes (numerico) de entrada");
scanf("%d", &auxFecha.mes);
printf("año (numerico) de entrada");
scanf("%d", &auxFecha.anio);

return auxFecha;
}

void altaPersona(ePersona arrayPersona[], int tamanioArray)
{
    eFecha auxFecha;
    int i = buscaLibre(arrayPersona,tamanioArray);

    if(i != -1){
    arrayPersona[i].estado = 1;
    printf("hay lugar, ingrese \n ");

    printf("\n ingrese el nombre del empleado \n");
    fflush(stdin);
    gets(arrayPersona[i].nombre);
    printf(" \n ingrese el legajo del empleado \n");
    scanf("%d", &arrayPersona[i].legajo);
    printf("\n ingrese el sueldo del empleado \n ");
    scanf("%f", &arrayPersona[i].sueldo);
    auxFecha = cargarFecha(auxFecha);
    arrayPersona[i].fechaIngreso= auxFecha;

    printf("%2d / %2d / %4d", arrayPersona[i].fechaIngreso.dia,arrayPersona[i].fechaIngreso.mes,arrayPersona[i].fechaIngreso.anio);
}
    else printf("NO HAY LUGAR");
}


int buscarPorLegajo(ePersona arrayPersonas[], int tamanioArray, int legajo){
int i;

for(i = 0; i < tamanioArray; i++){
    if(arrayPersonas[i].legajo == legajo && arrayPersonas[i].estado == 1){
        return i;
        break;
    }
}
return -1;
}

void listarPersonas(ePersona arrayPersona[], int tamanioArray)
{
int i;
    for(i = 0; i < tamanioArray; i++)
        {
            if(arrayPersona[i].estado == 1){
                printf("Fecha ingreso : %2d / %2d / %4d \n", arrayPersona[i].fechaIngreso.dia,arrayPersona[i].fechaIngreso.mes,arrayPersona[i].fechaIngreso.anio);
                printf("Nombre empleado: %s \n", arrayPersona[i].nombre);
                printf("Legajo del empleado: %d \n", arrayPersona[i].legajo);
                printf("Sueldo del empleado: %.2f", arrayPersona[i].sueldo);
            }
        }

}
