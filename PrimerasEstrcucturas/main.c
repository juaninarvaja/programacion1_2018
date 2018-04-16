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

int main()
{
    eEmpleado unEmpleado;
    // unEmpleado.legajo = 17894;
     //strcpy(unEmpleado.nombre, "Athina");
     //unEmpleado.sueldo = 10.50;
     //unEmpleado.sexo = 'f';

   printf("ingrses un nombre ");
   fflush(stdin);
   gets(unEmpleado.nombre);
    printf("Ingrese legajo ");
    scanf("%d", &unEmpleado.legajo);
    printf("ingrese sueldo ");
    scanf("%f", &unEmpleado.sueldo);
    printf("ingrese sexo");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);
    mostrarEmpleado(unEmpleado);
    return 0;
}


void mostrarEmpleado(eEmpleado emp){
  printf("nombre %s \n", emp.nombre);
    printf("legajo %d \n", emp.legajo);
    printf("sueldo %.2f \n", emp.sueldo);
    printf("sexo %c \n", emp.sexo);

}
