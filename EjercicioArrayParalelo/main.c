#include <stdio.h>
#include <stdlib.h>
#include "promedio.h"
#define TAMAN 3



int main()
//datos hardcodeados. alta. mostrar. materia laboratorio. get int. devuelve algo entre 0 y 10.
//for con define
//FUNCION PARA EL PROMEDIO: float sacarPromedio(int notaUno, int notaDos);
{
    char apellidoAlumno[TAMAN][20];
    int notaUno[TAMAN];
    int notaDos[TAMAN];
    float promedio[TAMAN];
    int i, criterio;
    int error;


    for(i=0; i<TAMAN; i++){
        printf("INGRESE EL APELLIDO DEL ALUMNO  %d \n ",i);
        fflush(stdin);
        gets(apellidoAlumno[i]);
       error = getInt("ingrese nota uno ", "Error!",10,0,10,&notaUno[i]);
       if(error!= 0){
        printf("no se pudo registrar la nota uno de este Alumno, reintente");
        error = getInt("ingrese nota uno", "Error!",10,0,10,&notaUno[i]);
       }
       error = getInt("ingrese la segunda nota ", "Error!",10,0,10, &notaDos[i]);
       if(error!= 0){
        printf("no se pudo registrar la nota dos de este Alumno, reintente");
        error = getInt("ingrese nota dos", "Error!",10,0,10,&notaDos[i]);
       }
       promedio[i] = sacarPromedio(notaUno[i], notaDos[i]);

    }

    mostrarPromedios(apellidoAlumno, promedio);

    printf("ORDENAR POR PROMEDIO: \n presione 1 si lo quiere de mayor a menor, o 0 si lo quiere de menor a mayor \n");
    scanf("%d", &criterio);
    ordenarMayorPromedio(apellidoAlumno, promedio, criterio);
    mostrarPromedios(apellidoAlumno, promedio);
     printf("ORDENAR POR PROMEDIO: \n presione 1 si lo quiere de mayor a menor, o 0 si lo quiere de menor a mayor \n");
    scanf("%d", &criterio);
    ordenarMayorPromedio(apellidoAlumno, promedio, criterio);
    mostrarPromedios(apellidoAlumno, promedio);
    return 0;
}
