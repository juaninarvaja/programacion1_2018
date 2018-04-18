#include <stdio.h>
#include <stdlib.h>
#include "promedio.h"
#include <string.h>
#define TAMAN 3



int esUnEntero(char *cadena){
    int i =0;

    while( cadena[i] != '\0')
    {
        if(cadena[i] < '0'  || cadena[i] > '9')
          return 0;
        i++;

    }
    return 1;
}

int getInt(char* msg,char* msgE,int cIntentos,long numMin,long numMax,int* result)
{
    int codError=-1;
    long auxNum;
    int intentos=cIntentos;

    do
    {
        printf("%s",msg);
        scanf("%ld",&auxNum);

        intentos--;

        if(auxNum<numMin || auxNum>numMax)
        {
            codError=-1;
            printf("%s\n",msgE);
        }
        else
            codError=0;
    }while(codError!=0 && intentos>0);

    if(intentos==0)
        codError=-1;
    else
    {
        codError=0;
        *result=auxNum;
    }

    return codError;
}


float sacarPromedio(int notaUno, int notaDos){
    float auxfloat = 0;

    auxfloat =( (float)notaUno + (float) notaDos ) / 2 ;

    return auxfloat;


}


void mostrarPromedios(char apellidos[][20], float promedio[]){

int i;

for( i = 0; i < TAMAN; i++){
    printf("Alumno: %s \t", apellidos[i]);
    printf("Promedio: %.2f \n", promedio[i]);
    }
}


void ordenarMayorPromedio(char apellidos[][20], float promedio[], int criterio){

int i, j = TAMAN, flag = 1;
char auxString[20];
float auxPromedio;

if(criterio == 0){

while(flag){
flag = 0;

for (i = 1; i < j; i++) {
    if (promedio[i] < promedio[i - 1]){
        strcpy(auxString, apellidos[i]);
        auxPromedio = promedio[i];
        strcpy(apellidos[i],apellidos[i - 1]);
        promedio[i] = promedio[i -1];
        strcpy(apellidos[i - 1], auxString);
        promedio[i-1] = auxPromedio;

        flag = 1;
            }
    }
j--;
    }

  }

 if(criterio == 1){
    while(flag){
flag = 0;

for (i = 1; i < j; i++) {
    if (promedio[i] > promedio[i - 1]){
        strcpy(auxString, apellidos[i]);
        auxPromedio = promedio[i];
        strcpy(apellidos[i],apellidos[i - 1]);
        promedio[i] = promedio[i -1];
        strcpy(apellidos[i - 1], auxString);
        promedio[i-1] = auxPromedio;

        flag = 1;
            }
    }
j--;
    }

  }



 }
