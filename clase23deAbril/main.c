#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#define TAM 2
int main()
{
    ePersona arrayPersonas[TAM];
    inicializarPersona(arrayPersonas, TAM);



    int opcion;
do{
    switch(opcion = menu())
    {
     case 1: altaPersona(arrayPersonas, TAM);

            system("pause");
         break;
     case 2:printf(" Baja \n \n ");
            system("pause");
         break;
     case 3:printf("Modificacion: \n \n ");
            system("pause");
         break;
     case 4:printf(" Listar \n \n ");
            listarPersonas(arrayPersonas, TAM);
            system("pause");
         break;
     case 5:printf(" Ordenar \n \n ");
            system("pause");
         break;
     case 6: opcion = 1;
         break;
    }


}while(opcion != 6);


return 0;
}
