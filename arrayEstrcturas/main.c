#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nombre[20];
    int legajo;
    float sueldo;
    char sexo;
}eEmpleado;
void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado arrayEmp[], int tam);
void ordenarEmpleados(eEmpleado arrayEmp[], int tam);

int main()
{
    eEmpleado plantel[] = {{"Juan",111,500.50,'m'},{"Ana",222,750.58,'f'},{"Marcos",333,458.75,'m'}};


    mostrarEmpleados(plantel, 3);
    ordenarEmpleados(plantel, 3);
    mostrarEmpleados(plantel, 3);
    return 0;
}

void mostrarEmpleado(eEmpleado emp){
  printf("nombre %s \n", emp.nombre);
    printf("legajo %d \n", emp.legajo);
    printf("sueldo %.2f \n", emp.sueldo);
    printf("sexo %c \n", emp.sexo);

}


void mostrarEmpleados(eEmpleado arrayEmp[],int tam){

    int i;
for(i =0 ; i < tam; i++){

    mostrarEmpleado(arrayEmp[i]);
}
}


void ordenarEmpleados(eEmpleado arrayEmp[], int tam){
eEmpleado aux; //creo un auxiliar para el burbujeo
int i,j;
for(i=0; i<tam-1; i++){
    for(j = i+1; j < tam; j++){
        if( strcmp(arrayEmp[i].nombre, arrayEmp[j].nombre) > 0){
            aux = arrayEmp[i];
            arrayEmp[i] = arrayEmp[j];
            arrayEmp[j] = aux;

        }
    }



}


}
